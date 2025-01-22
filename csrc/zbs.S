.global _start

_start:
    # bclr
    li t0, 0xFF
    li t1, 3
    bclr t0, t0, t1
    # t0 = 0xF7

    # bclri
    li t2, 0xAA
    bclri t2, t2, 1
    # t2 = 0xA8

    # bext
    li t3, 0xAD
    li t4, 4
    bext t3, t3, t4
    # t3 = 0x0

    # bexti
    li t5, 0xCC
    bexti t5, t5, 5
    # t5 = 0x0

    # binv
    li t6, 0xF0
    li s2, 4
    binv t6, t6, s2
    # t6 = 0xE0

    # binvi
    li s3, 0xE3
    binvi s3, s3, 1
    # s3 = 0xE1

    # bset
    li s4, 0x00
    li s5, 3
    bset s4, s4, s5
    # s4 = 0x08

    # bseti
    li s6, 0xA0
    bseti s6, s6, 1
    # s6 = 0xA2