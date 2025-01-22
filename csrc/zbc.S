.globl _start
_start:
    # clmul
    li t0, 0x3
    li t1, 0x5
    clmul t0, t0, t1
    # t0 = 0xF
    
    # clmulh
    li t2, 0xAAAA0000
    li t3, 0xBBBBBBBB
    clmulh t2, t2, t3
    # t2 = 0x4E4E0000

    # clmulr
    li t4, 0x25C1FF6
    li t5, 0xB9E92D8E
    clmulr t4, t4, t5
    # t4 = 0x2A226FD