import struct
from math import sqrt, log2, sin, cos

def floats_to_bits(f):
    if f == float('inf'):
        return 0x7F800000
    if f == float('-inf'):
        return 0xFF800000
    if f != f:  # NaN
        return 0x7FFFFFFF
    try:
        return struct.unpack('>I', struct.pack('>f', f))[0]
    except OverflowError:
        return 0x7F800000 if f > 0 else 0xFF800000

def bits_to_floats(b):
    return struct.unpack('>f', struct.pack('>I', b))[0]

def extract_parts(bits_in):
    f = bits_to_floats(bits_in)
    sign = (bits_in >> 31) & 1
    exp = (bits_in >> 23) & 0xFF
    mant = bits_in & 0x7FFFFF
    return f, sign, exp, mant


def flush_denorm(bits_in):
    exp = (bits_in >> 23) & 0xFF
    mant = bits_in & 0x7FFFFF
    sign = (bits_in >> 31) & 1
    if exp == 0 and mant != 0:
        return sign << 31  # flush zu ±0
    return bits_in

def golden_rcp(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0xFF and mant != 0:  #NAN
        return 0x7FFFFFFF
    if exp == 0xFF and mant == 0:  #pm inf
        return sign << 31
    if exp == 0 and mant == 0:     #pm 0
        return (sign << 31) | 0x7F800000

    result = 1.0 / float(f)
    return floats_to_bits(result)

def golden_rsqrt(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0xFF and mant != 0:
        return 0x7FFFFFFF
    if exp == 0 and mant == 0:
        return (sign << 31) | 0x7F800000
    if sign == 1:
        return 0x7FFFFFFF
    if exp == 0xFF and mant == 0:
        return 0x00000000

    result = 1.0 / sqrt(f)
    return floats_to_bits(result)

def golden_lg2(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0 and mant == 0:
        return 0xFF800000
    if sign == 1:
        return 0x7FFFFFFF
    if exp == 0xFF and mant != 0:
        return 0x7FFFFFFF
    if exp == 0xFF and mant == 0:
        return 0x7F800000
    if f == 1.0:
        return 0x00000000

    result = log2(f)
    return floats_to_bits(result)

def golden_ex2(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0xFF and mant != 0:
        return 0x7FFFFFFF
    if exp == 0xFF and sign == 0:
       return 0x7F800000
    if exp == 0xFF and sign == 1:
       return 0x00000000
    if f > 127.0:
        return 0x7F800000
    if f < -126.0:
        return 0x00000000

    result = 2**f
    return floats_to_bits(result)

def golden_sin(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0xFF:
        return 0x7FFFFFFF
    if exp == 0 and mant == 0:
        return sign << 31
    
    result = sin(f)
    return floats_to_bits(result)

def golden_cos(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)

    if exp == 0xFF:
        return 0x7FFFFFFF
    if exp == 0 and mant == 0:
        return 0x3F800000

    result = cos(f)
    return floats_to_bits(result)

operations = {
    'rcp': golden_rcp,
    'rsqrt': golden_rsqrt,
    'lg2': golden_lg2,
    'ex2': golden_ex2,
    'sin': golden_sin,
    'cos': golden_cos
}

def main():
    for op, func in operations.items():
        with open(f"hex/{op}_golden_model.hex", "w") as f:
            for exp in range(0, 256):
                for mant in [0x000000, 0x000001, 0x3FFFFF, 0x7FFFFF]:
                    bits_in = (exp << 23) | mant
                    bits_out = func(bits_in)
                    f.write(f"{bits_in:08X} {bits_out:08X}\n")

if __name__ == "__main__":
    main()