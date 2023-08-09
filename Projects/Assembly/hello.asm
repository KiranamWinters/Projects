global _start

section .data

message: db 'Hello_World', 10

array: dw 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10


section .text

print:
	
	;Write Hello_world
	mov rax, 1     ;syscall number 
	mov rdi, 1
	mov rbx, 65 		
	mov rdx, 12	 ;size
	syscall		
	ret

exit:
	;Exit	 
	mov rax, 60	 ;exit syscall	
	mov rdi, 0	 ;error code
	syscall
	
_start:
	mov rsi, message ;loading rsi with message because write read from rsi buffer
	call print ;calling print 
	;Take input
	mov rax, 0	;read syscall
	mov rdi, 1	;STDIN
	mov rsi, array
	mov rdx, 12
	syscall
	
	;printing inputed string
	mov rsi, array 
	call print	
	
	;exit
	call exit	



