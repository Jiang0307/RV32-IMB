.globl _start
_start:
    # sh1add
    li t0, 0x00000002   # 將 t0 設置為 2
    li t1, 0x00000003   # 將 t1 設置為 3
    sh1add t0, t0, t1   # t0 = t1 + (t0 << 1)
    # t0 = 0x00000007

    # sh2add
    li t3, 0x00000004   # 將 t3 設置為 4
    sh2add t2, t3, t3   # t2 = t3 + (t3 << 2)
    # t2 = 0x00000014

    # sh3add
    li t4, 0x00000001   # 將 t4 設置為 1
    li t5, 0x00000008   # 將 t5 設置為 8
    sh3add t4, t4, t5   # t4 = t5 + (t4 << 3)
    # t4 = 0x00000010