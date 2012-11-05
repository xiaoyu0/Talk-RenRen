	.file	"switch_assembly.c"
	.text
	.globl	wy
	.type	wy, @function
wy:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	leaq	-4(%rbp), %rax
	movq	%rax, -16(%rbp)
	cmpl	$8, -20(%rbp)
	ja	.L2
	movl	-20(%rbp), %eax
	movq	.L8(,%rax,8), %rax
	jmp	*%rax
	.section	.rodata
	.align 8
	.align 4
.L8:
	.quad	.L2
	.quad	.L3
	.quad	.L4
	.quad	.L2
	.quad	.L5
	.quad	.L6
	.quad	.L2
	.quad	.L2
	.quad	.L7
	.text
.L3:
	movl	$1, -4(%rbp)
	jmp	.L9
.L4:
	movl	$5, -4(%rbp)
	jmp	.L9
.L7:
	movl	$9, -4(%rbp)
	jmp	.L9
.L5:
	movl	$12, -4(%rbp)
	jmp	.L9
.L6:
	movl	$16, -4(%rbp)
	jmp	.L9
.L2:
	movl	$0, -4(%rbp)
.L9:
	movl	-4(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	wy, .-wy
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
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	wy
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
