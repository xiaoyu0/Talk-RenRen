	.file	"endian.c"
	.section	.rodata
.LC0:
	.string	"start address : %p\nsize : %d\n"
.LC1:
	.string	"address : %p, value: %.2x\n"
	.text
	.globl	show_bytes
	.type	show_bytes, @function
show_bytes:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	%esi, -28(%rbp)
	movl	$.LC0, %eax
	movl	-28(%rbp), %edx
	movq	-24(%rbp), %rcx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax
	cltq
	addq	-24(%rbp), %rax
	movzbl	(%rax), %eax
	movzbl	%al, %edx
	movl	-4(%rbp), %eax
	cltq
	movq	%rax, %rcx
	addq	-24(%rbp), %rcx
	movl	$.LC1, %eax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	addl	$1, -4(%rbp)
.L2:
	movl	-4(%rbp), %eax
	cmpl	-28(%rbp), %eax
	jl	.L3
	movl	$10, %edi
	call	putchar
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	show_bytes, .-show_bytes
	.section	.rodata
.LC2:
	.string	"int n = (0x)%x\n"
	.text
	.globl	show_int
	.type	show_int, @function
show_int:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	-4(%rbp), %edx
	movl	$.LC2, %eax
	movl	%edx, %esi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	leaq	-4(%rbp), %rax
	movl	$4, %esi
	movq	%rax, %rdi
	call	show_bytes
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	show_int, .-show_int
	.section	.rodata
.LC3:
	.string	"pointer value : %p\n"
	.text
	.globl	show_pointer
	.type	show_pointer, @function
show_pointer:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rdx
	movl	$.LC3, %eax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf
	leaq	-8(%rbp), %rax
	movl	$8, %esi
	movq	%rax, %rdi
	call	show_bytes
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	show_pointer, .-show_pointer
	.globl	main
	.type	main, @function
main:
.LFB3:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$287454020, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	show_int
	leaq	-4(%rbp), %rax
	movq	%rax, %rdi
	call	show_pointer
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	show_int
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
