from math import sqrt, log2, sin, cos

operations = ['SFU_RCP', 'SFU_RSQRT', 'SFU_LG2', 'SFU_EX2', 'SFU_SIN', 'SFU_COS']

for op in operations:
    for i in range(128):
        a = 1.0 + i / 128.0
        match op:
            case 'SFU_RCP':  x0 = int((1/a)   * 2**7)
            case 'SFU_SQRT': x0 = int(1/sqrt(a) * 2**7)
            case 'SFU_LG2':  x0 = int(log2(a) * 2**7)
            case 'SFU_EX2':  x0 = int(2**a    * 2**7)
            case 'SFU_SIN':  x0 = int(sin(a)  * 2**7)
            case 'SFU_COS':  x0 = int(cos(a)  * 2**7)
        print(f"{{{op}, 7'd{i}}}: seed = 7'd{x0};")