for i in range(256):
    a = 1.0 + i / 256.0
    rcp = 1/a
    x0 = int(rcp * 2**24)
    print(f"8'd{i}: 24'd{x0};")