.globl _start
_start:
    # clz
    li t0, 0x0000000F
    clz t0, t0
    # t0 = 28

    # ctz
    li t1, 0x0000000F
    ctz t1, t1
    # t1 = 0

    # cpop
    li t2, 0x0000000F
    cpop t2, t2
    # t2 = 4

    # max min指令
    li t3, 0x00000010
    li t4, 0x0000000F
    max t3, t3, t4
    min t4, t3, t4
    # t3 = 0x00000010, t4 = 0x0000000F
    
    # maxu minu指令
    li t5, 0x00004567
    li t6, 0x00001234
    maxu t5, t5, t6
    minu t6, t5, t6
    # t5 = 0x00004567, t6 = 0x00001234

    # sext.b
    li s2, 0x00000070
    sext.b s2, s2
    # s2 = 0x00000070
    
    # sext.h
    li s3, 0x00007000
    sext.h s3, s3
    # s3 = 0x00007000

    # zext.h
    li s4, 0x00008000
    zext.h s4, s4
    # s4 = 0x00008000

    # orc.b
    li s5, 0x20000000
    orc.b s5, s5
    # s5 = "b11111111000000000000000000000000 (所有字節 OR 結果)