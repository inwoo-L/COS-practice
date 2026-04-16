.global convert

convert:
    xor %rcx, %rcx
    xor %rdx, %rdx

    
    .init:
        movb (%rdi,%rcx), %dl
        xorb $0x30, %dl
        movb %dl, (%rdi,%rcx)
        inc %rcx
        cmp $0x20, %rcx
        jg .end
        jmp .init

    .end: