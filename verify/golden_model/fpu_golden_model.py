import struct, random
import gmpy2
from gmpy2 import mpfr

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
    _, sign, exp, mant = extract_parts(bits_in)
    if exp == 0 and mant != 0:
        return sign << 31
    return bits_in

def golden_add(bits_in_1, bits_in_2):
    bits_in_1 = flush_denorm(bits_in_1)
    bits_in_2 = flush_denorm(bits_in_2)
    f_1, sign_1, exp_1, mant_1 = extract_parts(bits_in_1)
    f_2, sign_2, exp_2, mant_2 = extract_parts(bits_in_2)

    #NaN input
    if (exp_1 == 0xFF and mant_1 != 0) or (exp_2 == 0xFF and mant_2 != 0):
        return 0x7FC00000
    
    #pm both inf
    elif (exp_1 == 0xFF and mant_1 == 0) and (exp_2 == 0xFF and mant_2 == 0):
        if sign_1 == sign_2:
             return sign_1 << 31 | 0x7F800000
        else:
            return 0x7FC00000
    
    #one inf one not 
    elif (exp_1 == 0xFF and mant_1 == 0) or (exp_2 == 0xFF and mant_2 == 0):
        #first op is inf
        if (exp_1 == 0xFF and mant_1 == 0):
            return (sign_1 << 31) | 0x7F800000
        #second op is inf
        else: 
            return (sign_2 << 31) | 0x7F800000
    
    #pm both zero
    elif (exp_1 == 0x00 and mant_1 == 0) and (exp_2 == 0x00 and mant_2 == 0):
        if sign_1 == sign_2:
             return sign_1 << 31
        else:
            #Always return +0, only use RNE
            return 0
        
    #one zero one not
    elif (exp_1 == 0x00 and mant_1 == 0) or (exp_2 == 0x00 and mant_2 == 0):
        if (exp_1 == 0x00 and mant_1 == 0):
            return (sign_2 << 31) | (exp_2 << 23) | mant_2
        else:
            return (sign_1 << 31) | (exp_1 << 23) | mant_1
        
    else:
        result_bits = floats_to_bits(f_1 + f_2)
        return flush_denorm(result_bits)
    
def golden_sub(bits_in_1, bits_in_2):
    bits_in_2_neg = bits_in_2 ^ 0x80000000
    return golden_add(bits_in_1, bits_in_2_neg)

def golden_mul(bits_in_1, bits_in_2):
    bits_in_1 = flush_denorm(bits_in_1)
    bits_in_2 = flush_denorm(bits_in_2)
    f_1, sign_1, exp_1, mant_1 = extract_parts(bits_in_1)
    f_2, sign_2, exp_2, mant_2 = extract_parts(bits_in_2)

    #NaN
    if (exp_1 == 0xFF and mant_1 != 0) or (exp_2 == 0xFF and mant_2 != 0):
        return 0x7FC00000
    
    #inf
    elif (exp_1 == 0xFF and mant_1 == 0) or (exp_2 == 0xFF and mant_2 == 0):
        #one inf one zero
        if (exp_1 == 0 and mant_1 == 0) or (exp_2 == 0 and mant_2 == 0):
            return 0x7FC00000
        
        #both inf or one finite => both inf with XOR sign
        else: return ((sign_1 ^ sign_2) << 31) | 0x7F800000

    #both 0
    elif (exp_1 == 0 and mant_1 == 0) and (exp_2 == 0 and mant_2 == 0):
        return ((sign_1 ^ sign_2) << 31)
    
    else:
        result = f_1  * f_2
        
        if 0 < abs(result) < 2**-126:
            return (sign_1 ^ sign_2) << 31
        
        return floats_to_bits(result)

def golden_min(bits_in_1, bits_in_2):
    bits_in_1 = flush_denorm(bits_in_1)
    bits_in_2 = flush_denorm(bits_in_2)
    f_1, sign_1, exp_1, mant_1 = extract_parts(bits_in_1)
    f_2, sign_2, exp_2, mant_2 = extract_parts(bits_in_2)

    nan_1 = (exp_1 == 0xFF and mant_1 != 0)
    nan_2 = (exp_2 == 0xFF and mant_2 != 0)

    if nan_1 and nan_2: return 0x7FC00000
    if nan_1: return bits_in_2
    if nan_2: return bits_in_1

    if (exp_1 == 0 and mant_1 == 0) and (exp_2 == 0 and mant_2 == 0):
        return 0x80000000 if (sign_1 or sign_2) else 0x00000000

    return bits_in_1 if f_1 <= f_2 else bits_in_2

def golden_max(bits_in_1, bits_in_2):
    bits_in_1 = flush_denorm(bits_in_1)
    bits_in_2 = flush_denorm(bits_in_2)
    f_1, sign_1, exp_1, mant_1 = extract_parts(bits_in_1)
    f_2, sign_2, exp_2, mant_2 = extract_parts(bits_in_2)

    nan_1 = (exp_1 == 0xFF and mant_1 != 0)
    nan_2 = (exp_2 == 0xFF and mant_2 != 0)

    if nan_1 and nan_2: return 0x7FC00000
    if nan_1: return bits_in_2
    if nan_2: return bits_in_1

    if (exp_1 == 0 and mant_1 == 0) and (exp_2 == 0 and mant_2 == 0):
        return 0x00000000 if (not sign_1 or not sign_2) else 0x80000000

    return bits_in_1 if f_1 >= f_2 else bits_in_2

def golden_f2i_s(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)
    #NaN
    if (exp == 0xFF and mant != 0x00000000):
        return 0x00000000
    #inf
    elif (exp == 0xFF and mant == 0x00000000):
        if (sign != 0):
            return 0x80000000
        else:
            return 0x7FFFFFFF
    #Zero
    elif (exp == 0x00000000 and mant == 0x00000000):
        return 0x00000000
    else:
        #Over/Underflow
        result = int(f)
        result = max(-2**31, min(2**31 -1, result))
        return struct.unpack('>I', struct.pack('>i', result))[0]
 
def golden_f2i_u(bits_in):
    bits_in = flush_denorm(bits_in)
    f, sign, exp, mant = extract_parts(bits_in)
    #NaN
    if (exp == 0xFF and mant != 0x00000000):
        return 0x00000000
    #inf
    elif (exp == 0xFF and mant == 0x00000000):
        if (sign != 0):
            return 0x00000000
        else:
            return 0xFFFFFFFF
    #inf
    elif (exp == 0x00000000 and mant == 0x00000000):
        return 0x00000000
    else:
        #Over/Underflow
        result = int(f)
        result = max(0, min(2**32 -1, result))
        return result   

def golden_i2f_s(bits_in):
    val = struct.unpack('>i', struct.pack('>I', bits_in))[0]
    with gmpy2.context(gmpy2.get_context(), precision=24, round=gmpy2.RoundToZero):
        f = mpfr(val)
    return struct.unpack('>I', struct.pack('>f', float(f)))[0]

def golden_i2f_u(bits_in):
    return floats_to_bits(bits_in)

operations = {
    'add':       golden_add,
    'sub':       golden_sub,
    'mul':       golden_mul,
    'min':       golden_min,
    'max':       golden_max,
    'cvt_f2i_s': golden_f2i_s,
    'cvt_f2i_u': golden_f2i_u,
    'cvt_i2f_s': golden_i2f_s,
    'cvt_i2f_u': golden_i2f_u,
}

SIGN_CASES = [
    (0, 0),
    (0, 1),
    (1, 0),
    (1, 1)
]
SIGN_CASES_SIMPLE = [
    0, 1
]

EXP_CASES = [0x00, 0x01, 0x3F, 0x40, 0x7E, 0x7F, 0x80, 0xFE, 0xFF]

MANT_CASES = [
    0x000000,
    0x000001, 
    0x000002,
    0x3FFFFF, 
    0x400000, 
    0x7FFFFE, 
    0x7FFFFF,
    0x400001,
    0x3FFFFE, 
]

UNARY_OPS  = {'cvt_f2i_s', 'cvt_f2i_u', 'cvt_i2f_s', 'cvt_i2f_u'}

def main():
    for op, func in operations.items():
        if op in UNARY_OPS:
            with open(f"hex/fpu/{op}_golden_model.hex", "w") as f:
                for exp in EXP_CASES:
                    for mant in MANT_CASES:
                        for sign in SIGN_CASES_SIMPLE:
                            bits_in = (sign << 31) | (exp << 23) | mant
                            bits_out = func(bits_in)
                            f.write(f"{bits_in:08X} {bits_out:08X}\n")
                for _ in range(10_000):
                    b = random.randint(0, 0xFFFFFFFF)
                    out = func(b)
                    f.write(f"{b:08X} {out:08X}\n")

        else:  # binary ops
            with open(f"hex/fpu/{op}_golden_model.hex", "w") as f:
                for exp1 in EXP_CASES:
                    for exp2 in EXP_CASES:
                        for mant1 in MANT_CASES:
                            for mant2 in MANT_CASES:
                                for s1, s2 in SIGN_CASES:
                                    b1 = (s1 << 31) | (exp1 << 23) | mant1
                                    b2 = (s2 << 31) | (exp2 << 23) | mant2
                                    out = func(b1, b2)
                                    f.write(f"{b1:08X} {b2:08X} {out:08X}\n")
                for _ in range(10_000):
                    b1 = random.randint(0, 0xFFFFFFFF)
                    b2 = random.randint(0, 0xFFFFFFFF)
                    out = func(b1, b2)
                    f.write(f"{b1:08X} {b2:08X} {out:08X}\n")
                    



if __name__ == '__main__':
    main()