	.file	"vfunc_multi_inheritance.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.text._ZN5Base1D2Ev,"axG",@progbits,_ZN5Base1D5Ev,comdat
	.align 2
	.weak	_ZN5Base1D2Ev
	.type	_ZN5Base1D2Ev, @function
_ZN5Base1D2Ev:
.LFB967:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Base1+16, (%rax)
	movl	$0, %eax
	andl	$1, %eax
	testb	%al, %al
	je	.L1
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L1:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE967:
	.size	_ZN5Base1D2Ev, .-_ZN5Base1D2Ev
	.section	.text._ZN5Base1D0Ev,"axG",@progbits,_ZN5Base1D5Ev,comdat
	.align 2
	.weak	_ZN5Base1D0Ev
	.type	_ZN5Base1D0Ev, @function
_ZN5Base1D0Ev:
.LFB969:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Base1D1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE969:
	.size	_ZN5Base1D0Ev, .-_ZN5Base1D0Ev
	.section	.rodata
.LC0:
	.string	"Base1::f"
	.section	.text._ZN5Base11fEv,"axG",@progbits,_ZN5Base11fEv,comdat
	.align 2
	.weak	_ZN5Base11fEv
	.type	_ZN5Base11fEv, @function
_ZN5Base11fEv:
.LFB970:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC0, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE970:
	.size	_ZN5Base11fEv, .-_ZN5Base11fEv
	.section	.rodata
.LC1:
	.string	"Base1::g"
	.section	.text._ZN5Base11gEv,"axG",@progbits,_ZN5Base11gEv,comdat
	.align 2
	.weak	_ZN5Base11gEv
	.type	_ZN5Base11gEv, @function
_ZN5Base11gEv:
.LFB971:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC1, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE971:
	.size	_ZN5Base11gEv, .-_ZN5Base11gEv
	.section	.text._ZN5Base2D2Ev,"axG",@progbits,_ZN5Base2D5Ev,comdat
	.align 2
	.weak	_ZN5Base2D2Ev
	.type	_ZN5Base2D2Ev, @function
_ZN5Base2D2Ev:
.LFB973:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Base2+16, (%rax)
	movl	$0, %eax
	andl	$1, %eax
	testb	%al, %al
	je	.L8
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L8:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE973:
	.size	_ZN5Base2D2Ev, .-_ZN5Base2D2Ev
	.section	.text._ZN5Base2D0Ev,"axG",@progbits,_ZN5Base2D5Ev,comdat
	.align 2
	.weak	_ZN5Base2D0Ev
	.type	_ZN5Base2D0Ev, @function
_ZN5Base2D0Ev:
.LFB975:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Base2D1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	_ZN5Base2D0Ev, .-_ZN5Base2D0Ev
	.section	.rodata
.LC2:
	.string	"Base2::f"
	.section	.text._ZN5Base21fEv,"axG",@progbits,_ZN5Base21fEv,comdat
	.align 2
	.weak	_ZN5Base21fEv
	.type	_ZN5Base21fEv, @function
_ZN5Base21fEv:
.LFB976:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC2, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE976:
	.size	_ZN5Base21fEv, .-_ZN5Base21fEv
	.section	.rodata
.LC3:
	.string	"Base2::g"
	.section	.text._ZN5Base21gEv,"axG",@progbits,_ZN5Base21gEv,comdat
	.align 2
	.weak	_ZN5Base21gEv
	.type	_ZN5Base21gEv, @function
_ZN5Base21gEv:
.LFB977:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE977:
	.size	_ZN5Base21gEv, .-_ZN5Base21gEv
	.section	.rodata
.LC4:
	.string	"Base3::f"
	.section	.text._ZN5Base31fEv,"axG",@progbits,_ZN5Base31fEv,comdat
	.align 2
	.weak	_ZN5Base31fEv
	.type	_ZN5Base31fEv, @function
_ZN5Base31fEv:
.LFB978:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC4, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE978:
	.size	_ZN5Base31fEv, .-_ZN5Base31fEv
	.section	.rodata
.LC5:
	.string	"Base3::g"
	.section	.text._ZN5Base31gEv,"axG",@progbits,_ZN5Base31gEv,comdat
	.align 2
	.weak	_ZN5Base31gEv
	.type	_ZN5Base31gEv, @function
_ZN5Base31gEv:
.LFB979:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC5, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE979:
	.size	_ZN5Base31gEv, .-_ZN5Base31gEv
	.section	.text._ZN7DerivedD1Ev,"axG",@progbits,_ZN7DerivedD1Ev,comdat
	.weak	_ZThn8_N7DerivedD1Ev
	.type	_ZThn8_N7DerivedD1Ev, @function
_ZThn8_N7DerivedD1Ev:
.LFB1010:
	.cfi_startproc
	subq	$8, %rdi
	jmp	.LTHUNK0
	.cfi_endproc
.LFE1010:
	.size	_ZThn8_N7DerivedD1Ev, .-_ZThn8_N7DerivedD1Ev
	.section	.text._ZN7DerivedD2Ev,"axG",@progbits,_ZN7DerivedD5Ev,comdat
	.align 2
	.weak	_ZN7DerivedD2Ev
	.type	_ZN7DerivedD2Ev, @function
_ZN7DerivedD2Ev:
.LFB981:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+16, (%rax)
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+72, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+120, 16(%rax)
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdi
	call	_ZN5Base2D2Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Base1D2Ev
	movl	$0, %eax
	andl	$1, %eax
	testb	%al, %al
	je	.L17
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L17:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE981:
	.size	_ZN7DerivedD2Ev, .-_ZN7DerivedD2Ev
	.section	.text._ZN7DerivedD0Ev,"axG",@progbits,_ZN7DerivedD0Ev,comdat
	.weak	_ZThn8_N7DerivedD0Ev
	.type	_ZThn8_N7DerivedD0Ev, @function
_ZThn8_N7DerivedD0Ev:
.LFB1011:
	.cfi_startproc
	subq	$8, %rdi
	jmp	.LTHUNK1
	.cfi_endproc
.LFE1011:
	.size	_ZThn8_N7DerivedD0Ev, .-_ZThn8_N7DerivedD0Ev
	.align 2
	.weak	_ZN7DerivedD0Ev
	.type	_ZN7DerivedD0Ev, @function
_ZN7DerivedD0Ev:
.LFB983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7DerivedD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE983:
	.size	_ZN7DerivedD0Ev, .-_ZN7DerivedD0Ev
	.section	.text._ZN7Derived1fEv,"axG",@progbits,_ZN7Derived1fEv,comdat
	.weak	_ZThn16_N7Derived1fEv
	.type	_ZThn16_N7Derived1fEv, @function
_ZThn16_N7Derived1fEv:
.LFB1012:
	.cfi_startproc
	subq	$16, %rdi
	jmp	.LTHUNK2
	.cfi_endproc
.LFE1012:
	.size	_ZThn16_N7Derived1fEv, .-_ZThn16_N7Derived1fEv
	.weak	_ZThn8_N7Derived1fEv
	.type	_ZThn8_N7Derived1fEv, @function
_ZThn8_N7Derived1fEv:
.LFB1013:
	.cfi_startproc
	subq	$8, %rdi
	jmp	.LTHUNK3
	.cfi_endproc
.LFE1013:
	.size	_ZThn8_N7Derived1fEv, .-_ZThn8_N7Derived1fEv
	.section	.rodata
.LC6:
	.string	"Derived::f"
	.section	.text._ZN7Derived1fEv,"axG",@progbits,_ZN7Derived1fEv,comdat
	.align 2
	.weak	_ZN7Derived1fEv
	.type	_ZN7Derived1fEv, @function
_ZN7Derived1fEv:
.LFB984:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC6, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE984:
	.size	_ZN7Derived1fEv, .-_ZN7Derived1fEv
	.section	.rodata
.LC7:
	.string	"Derived:g1"
	.section	.text._ZN7Derived2g1Ev,"axG",@progbits,_ZN7Derived2g1Ev,comdat
	.align 2
	.weak	_ZN7Derived2g1Ev
	.type	_ZN7Derived2g1Ev, @function
_ZN7Derived2g1Ev:
.LFB985:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	$.LC7, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE985:
	.size	_ZN7Derived2g1Ev, .-_ZN7Derived2g1Ev
	.section	.rodata
	.align 8
.LC8:
	.string	"Derived::checkVt => funp = %p\n"
	.section	.text._ZN7Derived7checkVtEv,"axG",@progbits,_ZN7Derived7checkVtEv,comdat
	.align 2
	.weak	_ZN7Derived7checkVtEv
	.type	_ZN7Derived7checkVtEv, @function
_ZN7Derived7checkVtEv:
.LFB986:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC8, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE986:
	.size	_ZN7Derived7checkVtEv, .-_ZN7Derived7checkVtEv
	.section	.text._ZN5Base1C2Ev,"axG",@progbits,_ZN5Base1C5Ev,comdat
	.align 2
	.weak	_ZN5Base1C2Ev
	.type	_ZN5Base1C2Ev, @function
_ZN5Base1C2Ev:
.LFB990:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Base1+16, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE990:
	.size	_ZN5Base1C2Ev, .-_ZN5Base1C2Ev
	.section	.text._ZN5Base2C2Ev,"axG",@progbits,_ZN5Base2C5Ev,comdat
	.align 2
	.weak	_ZN5Base2C2Ev
	.type	_ZN5Base2C2Ev, @function
_ZN5Base2C2Ev:
.LFB993:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Base2+16, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE993:
	.size	_ZN5Base2C2Ev, .-_ZN5Base2C2Ev
	.section	.text._ZN5Base3C2Ev,"axG",@progbits,_ZN5Base3C5Ev,comdat
	.align 2
	.weak	_ZN5Base3C2Ev
	.type	_ZN5Base3C2Ev, @function
_ZN5Base3C2Ev:
.LFB996:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Base3+16, (%rax)
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE996:
	.size	_ZN5Base3C2Ev, .-_ZN5Base3C2Ev
	.section	.text._ZN7DerivedC2Ev,"axG",@progbits,_ZN7DerivedC5Ev,comdat
	.align 2
	.weak	_ZN7DerivedC2Ev
	.type	_ZN7DerivedC2Ev, @function
_ZN7DerivedC2Ev:
.LFB998:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Base1C2Ev
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rdi
	call	_ZN5Base2C2Ev
	movq	-8(%rbp), %rax
	addq	$16, %rax
	movq	%rax, %rdi
	call	_ZN5Base3C2Ev
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+16, (%rax)
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+72, 8(%rax)
	movq	-8(%rbp), %rax
	movq	$_ZTV7Derived+120, 16(%rax)
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE998:
	.size	_ZN7DerivedC2Ev, .-_ZN7DerivedC2Ev
	.text
	.globl	main
	.type	main, @function
main:
.LFB987:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA987
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	.cfi_offset 3, -24
	call	_ZN7DerivedC1Ev
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	call	_ZN7Derived7checkVtEv
.LEHE0:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7DerivedD1Ev
	movl	$0, %eax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L31:
	.cfi_restore_state
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN7DerivedD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB1:
	call	_Unwind_Resume
.LEHE1:
	.cfi_endproc
.LFE987:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA987:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE987-.LLSDACSB987
.LLSDACSB987:
	.uleb128 .LEHB0-.LFB987
	.uleb128 .LEHE0-.LEHB0
	.uleb128 .L31-.LFB987
	.uleb128 0
	.uleb128 .LEHB1-.LFB987
	.uleb128 .LEHE1-.LEHB1
	.uleb128 0
	.uleb128 0
.LLSDACSE987:
	.text
	.size	main, .-main
	.weak	_ZTV7Derived
	.section	.rodata._ZTV7Derived,"aG",@progbits,_ZTV7Derived,comdat
	.align 32
	.type	_ZTV7Derived, @object
	.size	_ZTV7Derived, 136
_ZTV7Derived:
	.quad	0
	.quad	_ZTI7Derived
	.quad	_ZN7DerivedD1Ev
	.quad	_ZN7DerivedD0Ev
	.quad	_ZN7Derived1fEv
	.quad	_ZN5Base11gEv
	.quad	_ZN7Derived2g1Ev
	.quad	-8
	.quad	_ZTI7Derived
	.quad	_ZThn8_N7DerivedD1Ev
	.quad	_ZThn8_N7DerivedD0Ev
	.quad	_ZThn8_N7Derived1fEv
	.quad	_ZN5Base21gEv
	.quad	-16
	.quad	_ZTI7Derived
	.quad	_ZThn16_N7Derived1fEv
	.quad	_ZN5Base31gEv
	.weak	_ZTV5Base3
	.section	.rodata._ZTV5Base3,"aG",@progbits,_ZTV5Base3,comdat
	.align 32
	.type	_ZTV5Base3, @object
	.size	_ZTV5Base3, 32
_ZTV5Base3:
	.quad	0
	.quad	_ZTI5Base3
	.quad	_ZN5Base31fEv
	.quad	_ZN5Base31gEv
	.weak	_ZTV5Base2
	.section	.rodata._ZTV5Base2,"aG",@progbits,_ZTV5Base2,comdat
	.align 32
	.type	_ZTV5Base2, @object
	.size	_ZTV5Base2, 48
_ZTV5Base2:
	.quad	0
	.quad	_ZTI5Base2
	.quad	_ZN5Base2D1Ev
	.quad	_ZN5Base2D0Ev
	.quad	_ZN5Base21fEv
	.quad	_ZN5Base21gEv
	.weak	_ZTV5Base1
	.section	.rodata._ZTV5Base1,"aG",@progbits,_ZTV5Base1,comdat
	.align 32
	.type	_ZTV5Base1, @object
	.size	_ZTV5Base1, 48
_ZTV5Base1:
	.quad	0
	.quad	_ZTI5Base1
	.quad	_ZN5Base1D1Ev
	.quad	_ZN5Base1D0Ev
	.quad	_ZN5Base11fEv
	.quad	_ZN5Base11gEv
	.weak	_ZTS7Derived
	.section	.rodata._ZTS7Derived,"aG",@progbits,_ZTS7Derived,comdat
	.type	_ZTS7Derived, @object
	.size	_ZTS7Derived, 9
_ZTS7Derived:
	.string	"7Derived"
	.weak	_ZTI7Derived
	.section	.rodata._ZTI7Derived,"aG",@progbits,_ZTI7Derived,comdat
	.align 32
	.type	_ZTI7Derived, @object
	.size	_ZTI7Derived, 72
_ZTI7Derived:
	.quad	_ZTVN10__cxxabiv121__vmi_class_type_infoE+16
	.quad	_ZTS7Derived
	.long	0
	.long	3
	.quad	_ZTI5Base1
	.quad	2
	.quad	_ZTI5Base2
	.quad	2050
	.quad	_ZTI5Base3
	.quad	4098
	.weak	_ZTS5Base3
	.section	.rodata._ZTS5Base3,"aG",@progbits,_ZTS5Base3,comdat
	.type	_ZTS5Base3, @object
	.size	_ZTS5Base3, 7
_ZTS5Base3:
	.string	"5Base3"
	.weak	_ZTI5Base3
	.section	.rodata._ZTI5Base3,"aG",@progbits,_ZTI5Base3,comdat
	.align 16
	.type	_ZTI5Base3, @object
	.size	_ZTI5Base3, 16
_ZTI5Base3:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Base3
	.weak	_ZTS5Base2
	.section	.rodata._ZTS5Base2,"aG",@progbits,_ZTS5Base2,comdat
	.type	_ZTS5Base2, @object
	.size	_ZTS5Base2, 7
_ZTS5Base2:
	.string	"5Base2"
	.weak	_ZTI5Base2
	.section	.rodata._ZTI5Base2,"aG",@progbits,_ZTI5Base2,comdat
	.align 16
	.type	_ZTI5Base2, @object
	.size	_ZTI5Base2, 16
_ZTI5Base2:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Base2
	.weak	_ZTS5Base1
	.section	.rodata._ZTS5Base1,"aG",@progbits,_ZTS5Base1,comdat
	.type	_ZTS5Base1, @object
	.size	_ZTS5Base1, 7
_ZTS5Base1:
	.string	"5Base1"
	.weak	_ZTI5Base1
	.section	.rodata._ZTI5Base1,"aG",@progbits,_ZTI5Base1,comdat
	.align 16
	.type	_ZTI5Base1, @object
	.size	_ZTI5Base1, 16
_ZTI5Base1:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Base1
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1008:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L32
	cmpl	$65535, -8(%rbp)
	jne	.L32
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$_ZNSt8ios_base4InitD1Ev, %eax
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movq	%rax, %rdi
	call	__cxa_atexit
.L32:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1008:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1009:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1009:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.ctors,"aw",@progbits
	.align 8
	.quad	_GLOBAL__sub_I_main
	.weakref	_ZL20__gthrw_pthread_oncePiPFvvE,pthread_once
	.weakref	_ZL27__gthrw_pthread_getspecificj,pthread_getspecific
	.weakref	_ZL27__gthrw_pthread_setspecificjPKv,pthread_setspecific
	.weakref	_ZL22__gthrw_pthread_createPmPK14pthread_attr_tPFPvS3_ES3_,pthread_create
	.weakref	_ZL20__gthrw_pthread_joinmPPv,pthread_join
	.weakref	_ZL21__gthrw_pthread_equalmm,pthread_equal
	.weakref	_ZL20__gthrw_pthread_selfv,pthread_self
	.weakref	_ZL22__gthrw_pthread_detachm,pthread_detach
	.weakref	_ZL22__gthrw_pthread_cancelm,pthread_cancel
	.weakref	_ZL19__gthrw_sched_yieldv,sched_yield
	.weakref	_ZL26__gthrw_pthread_mutex_lockP15pthread_mutex_t,pthread_mutex_lock
	.weakref	_ZL29__gthrw_pthread_mutex_trylockP15pthread_mutex_t,pthread_mutex_trylock
	.weakref	_ZL31__gthrw_pthread_mutex_timedlockP15pthread_mutex_tPK8timespec,pthread_mutex_timedlock
	.weakref	_ZL28__gthrw_pthread_mutex_unlockP15pthread_mutex_t,pthread_mutex_unlock
	.weakref	_ZL26__gthrw_pthread_mutex_initP15pthread_mutex_tPK19pthread_mutexattr_t,pthread_mutex_init
	.weakref	_ZL29__gthrw_pthread_mutex_destroyP15pthread_mutex_t,pthread_mutex_destroy
	.weakref	_ZL30__gthrw_pthread_cond_broadcastP14pthread_cond_t,pthread_cond_broadcast
	.weakref	_ZL27__gthrw_pthread_cond_signalP14pthread_cond_t,pthread_cond_signal
	.weakref	_ZL25__gthrw_pthread_cond_waitP14pthread_cond_tP15pthread_mutex_t,pthread_cond_wait
	.weakref	_ZL30__gthrw_pthread_cond_timedwaitP14pthread_cond_tP15pthread_mutex_tPK8timespec,pthread_cond_timedwait
	.weakref	_ZL28__gthrw_pthread_cond_destroyP14pthread_cond_t,pthread_cond_destroy
	.weakref	_ZL26__gthrw_pthread_key_createPjPFvPvE,pthread_key_create
	.weakref	_ZL26__gthrw_pthread_key_deletej,pthread_key_delete
	.weakref	_ZL30__gthrw_pthread_mutexattr_initP19pthread_mutexattr_t,pthread_mutexattr_init
	.weakref	_ZL33__gthrw_pthread_mutexattr_settypeP19pthread_mutexattr_ti,pthread_mutexattr_settype
	.weakref	_ZL33__gthrw_pthread_mutexattr_destroyP19pthread_mutexattr_t,pthread_mutexattr_destroy
	.weak	_ZN5Base1D1Ev
	.set	_ZN5Base1D1Ev,_ZN5Base1D2Ev
	.weak	_ZN5Base2D1Ev
	.set	_ZN5Base2D1Ev,_ZN5Base2D2Ev
	.weak	_ZN7DerivedD1Ev
	.set	_ZN7DerivedD1Ev,_ZN7DerivedD2Ev
	.set	.LTHUNK0,_ZN7DerivedD1Ev
	.set	.LTHUNK1,_ZN7DerivedD0Ev
	.set	.LTHUNK2,_ZN7Derived1fEv
	.set	.LTHUNK3,_ZN7Derived1fEv
	.weak	_ZN5Base1C1Ev
	.set	_ZN5Base1C1Ev,_ZN5Base1C2Ev
	.weak	_ZN5Base2C1Ev
	.set	_ZN5Base2C1Ev,_ZN5Base2C2Ev
	.weak	_ZN5Base3C1Ev
	.set	_ZN5Base3C1Ev,_ZN5Base3C2Ev
	.weak	_ZN7DerivedC1Ev
	.set	_ZN7DerivedC1Ev,_ZN7DerivedC2Ev
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
