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
	movq	%rdi, -24(%rbp)  # p
	movl	%esi, -28(%rbp)  # size
	movl	$0, -8(%rbp)  # sum = 0
	movl	$0, -4(%rbp)  # i = 0
	jmp	.L2
.L3:
	movl	-4(%rbp), %eax # i=>%eax
	cltq
	salq	$2, %rax # i*4=>%rax (offset)
	addq	-24(%rbp), %rax # p+4=>%rax (address)
	movl	(%rax), %eax # *(p+i*4)=>%eax
	addl	%eax, -8(%rbp) # sum+=(*(p+i*4))
	addl	$1, -4(%rbp) # i++
.L2:
	movl	-4(%rbp), %eax  # i=>%eax
	cmpl	-28(%rbp), %eax # i < size 
	jl	.L3
	movl	-8(%rbp), %eax # sum=>%eax
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
	movq	%rdi, -24(%rbp) #p=>stack
	movl	%esi, -28(%rbp) #size=>stack
	movl	$0, -8(%rbp) # sum=0
	movl	$0, -4(%rbp) # i=0
.L5:
	movl	-4(%rbp), %eax #i=>%eax
	cltq
	salq	$2, %rax # i*4=>%rax (offset)
	addq	-24(%rbp), %rax # p+i*4=>%rax (address)
	movl	(%rax), %eax # *(address)=>%eax
	addl	%eax, -8(%rbp) # sum+=*(address)
	addl	$1, -4(%rbp) # i++
	movl	-4(%rbp), %eax # i=>%eax
	cmpl	-28(%rbp), %eax # i<size
	jl	.L5
	movl	-8(%rbp), %eax # return sum
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
	movq	%rdi, -24(%rbp) #p 参数都是局部变量在stack有固定位置
	movl	%esi, -28(%rbp) # size
	movl	$0, -8(%rbp)  # init
	movl	$0, -4(%rbp) # i
	jmp	.L7
.L8:                         # loop body
	movl	-4(%rbp), %eax
	cltq
	salq	$2, %rax
	addq	-24(%rbp), %rax
	movl	(%rax), %eax
	addl	%eax, -8(%rbp)
	addl	$1, -4(%rbp)
.L7:
	movl	-4(%rbp), %eax #两个stack中局部变量比较
	cmpl	-28(%rbp), %eax # i-size
	jl	.L8
	movl	-8(%rbp), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	sum2, .-sum2
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
	subq	$48, %rsp
	movl	$1, -48(%rbp)
	movl	$2, -44(%rbp)
	movl	$3, -40(%rbp)
	movl	$4, -36(%rbp)
	movl	$5, -32(%rbp)
	movl	$20, %edi
	call	malloc
	movq	%rax, -16(%rbp)
	movl	$10, -36(%rbp)
	movl	-32(%rbp), %ecx
	movl	-36(%rbp), %edx
	leaq	-48(%rbp), %rax
	movl	$5, %esi
	movq	%rax, %rdi
	call	sum
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE3:
	.size	main, .-main
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
