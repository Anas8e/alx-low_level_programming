section .data
    hello: db "Hello, Holberton", 10, 0   ; define the string to be printed

section .text
    global main
    extern printf

main:
    push rbp             ; set up the stack frame
    mov rbp, rsp

    lea rdi, [hello]     ; load the address of the string into rdi
    xor eax, eax         ; clear eax (return value from printf)
    call printf          ; call printf with the string

    mov rsp, rbp         ; restore the stack pointer
    pop rbp              ; restore the base pointer
    xor eax, eax         ; return 0
    ret

