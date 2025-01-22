.globl _start
_start:
    li t0, 0x00001234
    rev8 t0, t0

    li t1, 0x10100101
    rev8 t1, t1

    li t2, 0x00001111
    rev8 t2, t2