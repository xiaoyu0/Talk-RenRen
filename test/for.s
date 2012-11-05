	.file	"for.c"
	.text
	.globl	sum
	.type	sum, @function
sum:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L3
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	sum, .-sum
	.globl	sum1
	.type	sum1, @function
sum1:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
.L5:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L5
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	sum1, .-sum1
	.globl	sum2
	.type	sum2, @function
sum2:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L7
.L8:
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
.L7:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L8
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	sum2, .-sum2
	.globl	sum3
	.type	sum3, @function
sum3:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$0, -8(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L10
.L11:
	movl	-4(%rbp), %eax
	cltq
	subq	$1, %rax
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
.L10:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	setl	%al
	addl	$1, -4(%rbp)
	testb	%al, %al
	jne	.L11
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	sum3, .-sum3
	.section	.rodata
	.align 8
.LC0:
	.string	"t = %d\nt1 = %d\nt2 = %d\nt3 = %d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB4:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	$1, -48(%rbp)
	movl	$2, -44(%rbp)
	movl	$3, -40(%rbp)
	movl	$4, -36(%rbp)
	movl	$5, -32(%rbp)
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	sum
	movl	%eax, -16(%rbp)
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	sum1
	movl	%eax, -12(%rbp)
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	sum2
	movl	%eax, -8(%rbp)
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	sum3
	movl	%eax, -4(%rbp)
	movl	$.LC0, %eax
	movl	-4(%rbp), %edi
	movl	-8(%rbp), %ecx
	movl	-12(%rbp), %edx
	movl	-16(%rbp), %esi
	movl	%edi, %r8d
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	-16(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE4:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
