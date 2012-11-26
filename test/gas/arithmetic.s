	.file	"arithmetic.cpp"
	.text
	.globl	_Z4testiii
	.type	_Z4testiii, @function
_Z4testiii:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	%edx, -28(%rbp)
	negl	-20(%rbp)
	notl	-24(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	addl	%edx, %eax
	movl	%eax, -16(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	movl	%edx, %ecx
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -16(%rbp)
	movl	-20(%rbp), %eax
	imull	-24(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	andl	%edx, %eax
	movl	%eax, -12(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	orl	%edx, %eax
	movl	%eax, -8(%rbp)
	movl	-24(%rbp), %eax
	movl	-20(%rbp), %edx
	xorl	%edx, %eax
	movl	%eax, -4(%rbp)
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z4testiii, .-_Z4testiii
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$12, -16(%rbp)
	movl	$20, -12(%rbp)
	movl	$30, -8(%rbp)
	movl	-8(%rbp), %edx
	movl	-12(%rbp), %ecx
	movl	-16(%rbp), %eax
	movl	%ecx, %esi
	movl	%eax, %edi
	call	_Z4testiii
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
