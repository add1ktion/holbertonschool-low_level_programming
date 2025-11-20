; 100-hello_world.asm
; Assemble (Linux x86_64):
;   nasm -f elf64 100-hello_world.asm -o 100-hello_world.o
;   ld 100-hello_world.o -o 100-hello_world
; Then run: ./100-hello_world

section .data
msg:    db "Hello, World", 10
len:    equ $-msg

section .text
global _start

_start:
	; write(1, msg, len)
	mov     rax, 1      ; syscall: sys_write
	mov     rdi, 1      ; file descriptor: stdout
	mov     rsi, msg
	mov     rdx, len
	syscall

	; exit(0)
	mov     rax, 60     ; syscall: sys_exit
	xor     rdi, rdi
	syscall