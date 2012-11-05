	.file	"pointer2dataMember.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Point constructor"
	.section	.text._ZN5PointC2Ev,"axG",@progbits,_ZN5PointC5Ev,comdat
	.align 2
	.weak	_ZN5PointC2Ev
	.type	_ZN5PointC2Ev, @function
_ZN5PointC2Ev:
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
	movq	$_ZTV5Point+16, (%rax)
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
.LFE967:
	.size	_ZN5PointC2Ev, .-_ZN5PointC2Ev
	.section	.rodata
.LC1:
	.string	"Point::func_hs"
	.section	.text._ZN5Point7func_ysEv,"axG",@progbits,_ZN5Point7func_ysEv,comdat
	.align 2
	.weak	_ZN5Point7func_ysEv
	.type	_ZN5Point7func_ysEv, @function
_ZN5Point7func_ysEv:
.LFB969:
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
.LFE969:
	.size	_ZN5Point7func_ysEv, .-_ZN5Point7func_ysEv
	.section	.rodata
.LC2:
	.string	"Point::func_zzy"
	.section	.text._ZN5Point8func_zzyEv,"axG",@progbits,_ZN5Point8func_zzyEv,comdat
	.align 2
	.weak	_ZN5Point8func_zzyEv
	.type	_ZN5Point8func_zzyEv, @function
_ZN5Point8func_zzyEv:
.LFB970:
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
.LFE970:
	.size	_ZN5Point8func_zzyEv, .-_ZN5Point8func_zzyEv
	.section	.rodata
.LC3:
	.string	"Point destructor"
	.section	.text._ZN5PointD2Ev,"axG",@progbits,_ZN5PointD5Ev,comdat
	.align 2
	.weak	_ZN5PointD2Ev
	.type	_ZN5PointD2Ev, @function
_ZN5PointD2Ev:
.LFB972:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	$_ZTV5Point+16, (%rax)
	movl	$.LC3, %esi
	movl	$_ZSt4cout, %edi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, %eax
	andl	$1, %eax
	testb	%al, %al
	je	.L4
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
.L4:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE972:
	.size	_ZN5PointD2Ev, .-_ZN5PointD2Ev
	.section	.text._ZN5PointD0Ev,"axG",@progbits,_ZN5PointD5Ev,comdat
	.align 2
	.weak	_ZN5PointD0Ev
	.type	_ZN5PointD0Ev, @function
_ZN5PointD0Ev:
.LFB974:
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
	call	_ZN5PointD1Ev
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZdlPv
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE974:
	.size	_ZN5PointD0Ev, .-_ZN5PointD0Ev
	.section	.rodata
	.align 8
.LC4:
	.string	"&Point::x = %p\n&Point::y = %p\n&Point::z = %p\n"
	.section	.text._ZN5Point5printEv,"axG",@progbits,_ZN5Point5printEv,comdat
	.weak	_ZN5Point5printEv
	.type	_ZN5Point5printEv, @function
_ZN5Point5printEv:
.LFB975:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$16, %ecx
	movl	$12, %edx
	movl	$8, %esi
	movl	$.LC4, %edi
	movl	$0, %eax
	call	printf
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE975:
	.size	_ZN5Point5printEv, .-_ZN5Point5printEv
	.section	.rodata
	.align 8
.LC5:
	.string	"&this->x = %p\n&this->y = %p\n&this->z = %p\n"
	.section	.text._ZN5Point9printThisEv,"axG",@progbits,_ZN5Point9printThisEv,comdat
	.align 2
	.weak	_ZN5Point9printThisEv
	.type	_ZN5Point9printThisEv, @function
_ZN5Point9printThisEv:
.LFB976:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	leaq	16(%rax), %rcx
	movq	-8(%rbp), %rax
	leaq	12(%rax), %rdx
	movq	-8(%rbp), %rax
	addq	$8, %rax
	movq	%rax, %rsi
	movl	$.LC5, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE976:
	.size	_ZN5Point9printThisEv, .-_ZN5Point9printThisEv
	.section	.rodata
.LC6:
	.string	"the address of vt :%p\n"
	.section	.text._ZN5Point7printVtEv,"axG",@progbits,_ZN5Point7printVtEv,comdat
	.align 2
	.weak	_ZN5Point7printVtEv
	.type	_ZN5Point7printVtEv, @function
_ZN5Point7printVtEv:
.LFB977:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rsi
	movl	$.LC6, %edi
	movl	$0, %eax
	call	printf
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE977:
	.size	_ZN5Point7printVtEv, .-_ZN5Point7printVtEv
	.section	.rodata
.LC7:
	.string	"address of this funp%p\n"
	.section	.text._ZN5Point11callVtFuncsEv,"axG",@progbits,_ZN5Point11callVtFuncsEv,comdat
	.align 2
	.weak	_ZN5Point11callVtFuncsEv
	.type	_ZN5Point11callVtFuncsEv, @function
_ZN5Point11callVtFuncsEv:
.LFB978:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L13
.L14:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,8), %rdx
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	addq	%rdx, %rax
	movq	(%rax), %rax
	movq	%rax, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rsi
	movl	$.LC7, %edi
	movl	$0, %eax
	call	printf
	movq	-16(%rbp), %rax
	call	*%rax
	addl	$1, -4(%rbp)
.L13:
	cmpl	$1, -4(%rbp)
	setle	%al
	testb	%al, %al
	jne	.L14
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE978:
	.size	_ZN5Point11callVtFuncsEv, .-_ZN5Point11callVtFuncsEv
	.text
	.globl	main
	.type	main, @function
main:
.LFB979:
	.cfi_startproc
	.cfi_personality 0x3,__gxx_personality_v0
	.cfi_lsda 0x3,.LLSDA979
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$40, %rsp
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB0:
	.cfi_offset 3, -24
	call	_ZN5PointC1Ev
.LEHE0:
.LEHB1:
	call	_ZN5Point5printEv
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Point9printThisEv
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Point7printVtEv
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5Point11callVtFuncsEv
.LEHE1:
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
.LEHB2:
	call	_ZN5PointD1Ev
.LEHE2:
	movl	$0, %eax
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_remember_state
	.cfi_def_cfa 7, 8
	ret
.L17:
	.cfi_restore_state
	movq	%rax, %rbx
	leaq	-48(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN5PointD1Ev
	movq	%rbx, %rax
	movq	%rax, %rdi
.LEHB3:
	call	_Unwind_Resume
.LEHE3:
	.cfi_endproc
.LFE979:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA979:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE979-.LLSDACSB979
.LLSDACSB979:
	.uleb128 .LEHB0-.LFB979
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB979
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L17-.LFB979
	.uleb128 0
	.uleb128 .LEHB2-.LFB979
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB3-.LFB979
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
.LLSDACSE979:
	.text
	.size	main, .-main
	.weak	_ZTV5Point
	.section	.rodata._ZTV5Point,"aG",@progbits,_ZTV5Point,comdat
	.align 32
	.type	_ZTV5Point, @object
	.size	_ZTV5Point, 48
_ZTV5Point:
	.quad	0
	.quad	_ZTI5Point
	.quad	_ZN5Point7func_ysEv
	.quad	_ZN5Point8func_zzyEv
	.quad	_ZN5PointD1Ev
	.quad	_ZN5PointD0Ev
	.weak	_ZTS5Point
	.section	.rodata._ZTS5Point,"aG",@progbits,_ZTS5Point,comdat
	.type	_ZTS5Point, @object
	.size	_ZTS5Point, 7
_ZTS5Point:
	.string	"5Point"
	.weak	_ZTI5Point
	.section	.rodata._ZTI5Point,"aG",@progbits,_ZTI5Point,comdat
	.align 16
	.type	_ZTI5Point, @object
	.size	_ZTI5Point, 16
_ZTI5Point:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS5Point
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB988:
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
	jne	.L18
	cmpl	$65535, -8(%rbp)
	jne	.L18
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$_ZNSt8ios_base4InitD1Ev, %eax
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movq	%rax, %rdi
	call	__cxa_atexit
.L18:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE988:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB989:
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
.LFE989:
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
	.weak	_ZN5PointC1Ev
	.set	_ZN5PointC1Ev,_ZN5PointC2Ev
	.weak	_ZN5PointD1Ev
	.set	_ZN5PointD1Ev,_ZN5PointD2Ev
	.ident	"GCC: (Ubuntu/Linaro 4.6.3-1ubuntu5) 4.6.3"
	.section	.note.GNU-stack,"",@progbits
