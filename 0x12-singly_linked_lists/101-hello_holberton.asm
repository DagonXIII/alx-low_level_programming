section .data
    msg db 'Hello, Holberton',0
    fmt db '%s\n',0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    push qword msg
    push qword fmt
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    mov rax, 0
    ret
