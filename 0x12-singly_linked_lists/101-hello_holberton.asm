
section .data
  msg: db "Hello, Holberton", 10
  msglen: equ $ - msg

section .text

global main
main:
  mov rax, 1		; write(
  mov rdi, 1		;   STDOUT_FILENO,
  mov rsi, msg		;   "Hello, world!\n",
  mov rdx, msglen	;   sizeof("Hello, world!\n")
  syscall		; );

  mov rax, 60       ; exit(
  mov rdi, 0        ;   EXIT_SUCCESS
  syscall           ; );

