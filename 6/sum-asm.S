.global sum

sum:
    add %rdi, %rsi
    mov %rsi, %rax
    ret
