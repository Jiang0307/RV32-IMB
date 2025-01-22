.global _start

_start:
    # andn
    li t0, 0x12345678
    li t1, 0xF0F0F0F0
    andn t0, t0, t1
    # t0 = 0x02040608

    # orn
    li t2, 0x0000FFFF
    li t3, 0xFFFF0000
    orn t2, t2, t3
    # t2 = 0x0000FFFF

    # xnor
    li t4, 0x32345678
    li t5, 0x87654321
    xnor t4, t4, t5
    # t4 = 0x4AAEEAA6

    # rol
    li t6, 0x12345678
    li s2, 4
    rol t6, t6, s2
    # t6 = 0x23456781

    # ror
    li s3, 0x12345670
    li s4, 4
    ror s3, s3, s4
    # s3 = 0x01234567

    # rori
    li s5, 0x12345678
    rori s5, s5, 8
    # s5 = 0x78123456

    # rev8
    li s6, 0x10100101
    rev8 s6, s6
    # s6 = 0x01011010