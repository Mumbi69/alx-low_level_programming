section .data
    display db "Hello, Holberton",0
    format db "%s",10,0

section .text
    global main
    extern printf

main:
    push rbp

    mov rsi,display
    mov rdi,format

    mov rax, 0
    call printf

    pop rbp

    mov eax, 0
    ret
