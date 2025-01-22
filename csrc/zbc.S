.globl _start
_start:
    # clmul
    li t0, 0x00000001
    li t1, 0x00000001
    clmul t0, t0, t1
    # t0 = 0x00000001
    
    # clmulh
    li t2, 0x12345678
    li t3, 0x87654321
    clmulh t2, t2, t3
    # t2 = 0x1E1E1E1E

    # clmulr
    li t4, 0xA5A5A5A5
    li t5, 0x5A5A5A5A
    clmulr t4, t4, t5
    # t4 = 0x0F0F0F0F