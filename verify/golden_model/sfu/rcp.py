import struct

def floats_to_bits(f):
    return struct.unpack('>I', struct.pack('>f', f))[0]

def bits_to_floats(b):
    return struct.unpack('>f', struct.pack('>I', b))[0]

def golden_rcp(bits_in):
    f = bits_to_floats(bits_in)
    sign = (bits_in >> 31) & 1
    exp = (bits_in >> 23) & 0xFF
    mant = bits_in & 0x7FFFFF

    if exp == 0xFF and mant != 0:
        return 0x7FFFFFFF
    if exp == 0xFF and mant == 0:
        return sign << 31
    if exp == 0 and mant == 0:
        return (sign << 31) | 0x7F800000

    result = 1.0 / float(f)
    return floats_to_bits(result)

def main():
    with open("hex/test_vectors.hex", "w") as f:
        for exp in range(1, 255):
            for mant in [0x000000, 0x000001, 0x3FFFFF, 0x7FFFFF]:
                bits_in = (exp << 23) | mant
                bits_out = golden_rcp(bits_in)
                f.write(f"{bits_in:08X} {bits_out:08X}\n")

if __name__ == "__main__":
    main()