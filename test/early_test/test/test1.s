	.file	"test1.cpp"
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.rodata
.LC0:
	.string	"Test constructor called  "
	.text
	.align 2
.globl _ZN4TestC2Ei
	.type	_ZN4TestC2Ei, @function
_ZN4TestC2Ei:
.LFB958:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%eax)
	movl	$.LC0, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	ret
	.cfi_endproc
.LFE958:
	.size	_ZN4TestC2Ei, .-_ZN4TestC2Ei
	.align 2
.globl _ZN4TestC1Ei
	.type	_ZN4TestC1Ei, @function
_ZN4TestC1Ei:
.LFB959:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	8(%ebp), %eax
	movl	12(%ebp), %edx
	movl	%edx, (%eax)
	movl	$.LC0, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	12(%ebp), %edx
	movl	%edx, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	leave
	ret
	.cfi_endproc
.LFE959:
	.size	_ZN4TestC1Ei, .-_ZN4TestC1Ei
	.section	.rodata
.LC1:
	.string	"Test destructor called  "
	.text
	.align 2
.globl _ZN4TestD2Ev
	.type	_ZN4TestD2Ev, @function
_ZN4TestD2Ev:
.LFB961:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %ebx
	.cfi_offset 3, -12
	movl	$.LC1, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	addl	$20, %esp
	popl	%ebx
	popl	%ebp
	ret
	.cfi_endproc
.LFE961:
	.size	_ZN4TestD2Ev, .-_ZN4TestD2Ev
	.align 2
.globl _ZN4TestD1Ev
	.type	_ZN4TestD1Ev, @function
_ZN4TestD1Ev:
.LFB962:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$20, %esp
	movl	8(%ebp), %eax
	movl	(%eax), %ebx
	.cfi_offset 3, -12
	movl	$.LC1, 4(%esp)
	movl	$_ZSt4cout, (%esp)
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, 4(%esp)
	movl	%eax, (%esp)
	call	_ZNSolsEPFRSoS_E
	addl	$20, %esp
	popl	%ebx
	popl	%ebp
	ret
	.cfi_endproc
.LFE962:
	.size	_ZN4TestD1Ev, .-_ZN4TestD1Ev
.globl _Unwind_Resume
.globl main
	.type	main, @function
main:
.LFB963:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	.cfi_lsda 0x0,.LLSDA963
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$36, %esp
	movl	$1, 4(%esp)
	leal	28(%esp), %eax
	movl	%eax, (%esp)
.LEHB0:
	.cfi_escape 0x10,0x3,0x7,0x55,0x9,0xf0,0x1a,0x9,0xf4,0x22
	.cfi_escape 0x10,0x6,0x7,0x55,0x9,0xf0,0x1a,0x9,0xf8,0x22
	.cfi_escape 0x10,0x7,0x7,0x55,0x9,0xf0,0x1a,0x9,0xfc,0x22
	call	_ZN4TestC1Ei
.LEHE0:
	movl	$4, (%esp)
.LEHB1:
	call	_Znwj
.LEHE1:
	movl	%eax, %ebx
	movl	%ebx, %eax
	movl	$0, 4(%esp)
	movl	%eax, (%esp)
.LEHB2:
	call	_ZN4TestC1Ei
.LEHE2:
	movl	%ebx, 24(%esp)
	movl	24(%esp), %ebx
	testl	%ebx, %ebx
	jne	.L12
	jmp	.L13
.L17:
.L14:
	movl	%edx, %esi
	movl	%eax, %edi
	movl	%ebx, (%esp)
	call	_ZdlPv
	movl	%edi, %eax
	movl	%esi, %edx
	jmp	.L15
.L12:
	movl	%ebx, (%esp)
.LEHB3:
	call	_ZN4TestD1Ev
.LEHE3:
	movl	%ebx, (%esp)
	call	_ZdlPv
.L13:
	movl	$0, %ebx
	leal	28(%esp), %eax
	movl	%eax, (%esp)
.LEHB4:
	call	_ZN4TestD1Ev
.LEHE4:
	movl	%ebx, %eax
	addl	$36, %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	movl	%ebp, %esp
	popl	%ebp
	ret
.L18:
.L15:
	movl	%edx, %ebx
	movl	%eax, %esi
	leal	28(%esp), %eax
	movl	%eax, (%esp)
	call	_ZN4TestD1Ev
	movl	%esi, %eax
	movl	%ebx, %edx
	movl	%eax, (%esp)
.LEHB5:
	call	_Unwind_Resume
.LEHE5:
	.cfi_endproc
.LFE963:
	.size	main, .-main
.globl __gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA963:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE963-.LLSDACSB963
.LLSDACSB963:
	.uleb128 .LEHB0-.LFB963
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB1-.LFB963
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L18-.LFB963
	.uleb128 0x0
	.uleb128 .LEHB2-.LFB963
	.uleb128 .LEHE2-.LEHB2
	.uleb128 .L17-.LFB963
	.uleb128 0x0
	.uleb128 .LEHB3-.LFB963
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L18-.LFB963
	.uleb128 0x0
	.uleb128 .LEHB4-.LFB963
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0x0
	.uleb128 0x0
	.uleb128 .LEHB5-.LFB963
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0x0
	.uleb128 0x0
.LLSDACSE963:
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB972:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	.L21
	cmpl	$65535, 12(%ebp)
	jne	.L21
	movl	$_ZStL8__ioinit, (%esp)
	call	_ZNSt8ios_base4InitC1Ev
	movl	$_ZNSt8ios_base4InitD1Ev, %eax
	movl	$__dso_handle, 8(%esp)
	movl	$_ZStL8__ioinit, 4(%esp)
	movl	%eax, (%esp)
	call	__cxa_atexit
.L21:
	leave
	ret
	.cfi_endproc
.LFE972:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__I__ZN4TestC2Ei, @function
_GLOBAL__I__ZN4TestC2Ei:
.LFB973:
	.cfi_startproc
	.cfi_personality 0x0,__gxx_personality_v0
	pushl	%ebp
	.cfi_def_cfa_offset 8
	movl	%esp, %ebp
	.cfi_offset 5, -8
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	_Z41__static_initialization_and_destruction_0ii
	leave
	ret
	.cfi_endproc
.LFE973:
	.size	_GLOBAL__I__ZN4TestC2Ei, .-_GLOBAL__I__ZN4TestC2Ei
	.section	.ctors,"aw",@progbits
	.align 4
	.long	_GLOBAL__I__ZN4TestC2Ei
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
	.ident	"GCC: (Ubuntu 4.4.3-4ubuntu5) 4.4.3"
	.section	.note.GNU-stack,"",@progbits
