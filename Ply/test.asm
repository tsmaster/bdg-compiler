	.file	"bdg fact"
	.text
	.globl	main
	.align	16, 0x90
	.type	main,@function
main:
	.cfi_startproc
	pushq	%rax
.Ltmp1:
	.cfi_def_cfa_offset 16
	movl	$68, %edi
	callq	putchari
	movl	$76, %edi
	callq	putchari
	movl	$10, %edi
	callq	putchari
	xorl	%eax, %eax
	popq	%rdx
	ret
.Ltmp2:
	.size	main, .Ltmp2-main
	.cfi_endproc


	.section	".note.GNU-stack","",@progbits
