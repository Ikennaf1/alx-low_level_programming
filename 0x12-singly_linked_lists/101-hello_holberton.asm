	.file	"ass.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "Hello, Holberton\0"
	.text
	.globl	print_it
	.def	print_it;	.scl	2;	.type	32;	.endef
	.seh_proc	print_it
print_it:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	puts
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 11.3.0"
	.def	puts;	.scl	2;	.type	32;	.endef
