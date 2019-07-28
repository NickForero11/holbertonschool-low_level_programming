section .rodata
	string:    db `Hello, Holberton\n`

section .text
		global _start

	_start:
		; write(1, msg, 17)
		mov rdi, 1
		mov rsi, string
		mov rdx, 17
		mov rax, 1
		syscall
		; exit(0)
		mov rdi, 0
		mov rax, 60
		syscall
