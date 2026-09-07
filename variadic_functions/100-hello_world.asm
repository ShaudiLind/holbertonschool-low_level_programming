section .data
; The message to print
msg db 'Hello, World', 10  ; '10' is the ASCII code for a newline
len equ $ - msg            ; Calculate the length of the string automatically

section .text
global _start              ; Must be declared for the linker

_start:
; --- Syscall: write(1, msg, len) ---
mov rax, 1                 ; syscall number 1 is 'sys_write'
mov rdi, 1                 ; file descriptor 1 is 'stdout'
mov rsi, msg               ; address of the string
mov rdx, len               ; length of the string
syscall                    ; invoke the kernel

; --- Syscall: exit(0) ---
mov rax, 60                ; syscall number 60 is 'sys_exit'
mov rdi, 0                 ; exit status 0 (success)
syscall                    ; invoke the kernel

