	.file	"main.c"
	.text
.Ltext0:
	.globl	str_len
	.type	str_len, @function
str_len:
.LFB6:
	.file 1 "helpers.c"
	.loc 1 8 1
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	.loc 1 10 4
	cmpq	$0, -24(%rbp)
	je	.L2
	.loc 1 12 3
	movl	$0, -4(%rbp)
	.loc 1 13 7
	jmp	.L3
.L4:
	.loc 1 15 2
	addl	$1, -4(%rbp)
.L3:
	.loc 1 13 11
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movzbl	(%rax), %eax
	.loc 1 13 7
	testb	%al, %al
	jne	.L4
	.loc 1 17 8
	movl	-4(%rbp), %eax
	jmp	.L6
.L2:
	.loc 1 19 1
	movl	$-1, %edi
	call	exit@PLT
.L6:
	.loc 1 20 1 discriminator 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	str_len, .-str_len
	.globl	add_node
	.type	add_node, @function
add_node:
.LFB7:
	.file 2 "2-add_node.c"
	.loc 2 12 1
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	movq	%rsi, -32(%rbp)
	.loc 2 13 20
	movl	$24, %edi
	call	malloc@PLT
	movq	%rax, -8(%rbp)
	.loc 2 14 4
	cmpq	$0, -8(%rbp)
	je	.L8
	.loc 2 16 16
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	strdup@PLT
	movq	%rax, %rdx
	.loc 2 16 14
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	.loc 2 17 16
	movq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	str_len
	movl	%eax, %edx
	.loc 2 17 14
	movq	-8(%rbp), %rax
	movl	%edx, 8(%rax)
	.loc 2 18 17
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	.loc 2 18 15
	movq	-8(%rbp), %rax
	movq	%rdx, 16(%rax)
	.loc 2 19 7
	movq	-24(%rbp), %rax
	movq	-8(%rbp), %rdx
	movq	%rdx, (%rax)
	.loc 2 20 9
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	jmp	.L9
.L8:
	.loc 2 22 8
	movl	$0, %eax
.L9:
	.loc 2 23 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	add_node, .-add_node
	.section	.rodata
.LC0:
	.string	"[0] (nil)"
.LC1:
	.string	"[%d] %s\n"
	.text
	.globl	print_list
	.type	print_list, @function
print_list:
.LFB8:
	.file 3 "0-print_list.c"
	.loc 3 12 1
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -24(%rbp)
	.loc 3 13 8
	movq	$0, -8(%rbp)
	.loc 3 17 7
	jmp	.L11
.L14:
	.loc 3 19 6
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	.loc 3 19 4
	testq	%rax, %rax
	jne	.L12
	.loc 3 21 1
	leaq	.LC0(%rip), %rdi
	call	puts@PLT
	jmp	.L13
.L12:
	.loc 3 25 1
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
.L13:
	.loc 3 27 3
	movq	-24(%rbp), %rax
	movq	16(%rax), %rax
	movq	%rax, -24(%rbp)
	.loc 3 28 2
	addq	$1, -8(%rbp)
.L11:
	.loc 3 17 7
	cmpq	$0, -24(%rbp)
	jne	.L14
	.loc 3 30 8
	movq	-8(%rbp), %rax
	.loc 3 32 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	print_list, .-print_list
	.section	.rodata
.LC2:
	.string	"Alexandro"
.LC3:
	.string	"Asaia"
.LC4:
	.string	"Augustin"
.LC5:
	.string	"Bennett"
.LC6:
	.string	"Bilal"
.LC7:
	.string	"Chandler"
.LC8:
	.string	"Damian"
.LC9:
	.string	"Daniel"
.LC10:
	.string	"Dora"
.LC11:
	.string	"Electra"
.LC12:
	.string	"Gloria"
.LC13:
	.string	"Joe"
.LC14:
	.string	"John"
.LC15:
	.string	"Josquin"
.LC16:
	.string	"Kris"
.LC17:
	.string	"Marine"
.LC18:
	.string	"Mason"
.LC19:
	.string	"Praylin"
.LC20:
	.string	"Rick"
.LC21:
	.string	"Rona"
.LC22:
	.string	"Siphan"
.LC23:
	.string	"Sravanthi"
.LC24:
	.string	"Steven"
.LC25:
	.string	"Tasneem"
.LC26:
	.string	"William"
.LC27:
	.string	"Zee"
	.text
	.globl	main
	.type	main, @function
main:
.LFB9:
	.file 4 "main.c"
	.loc 4 14 1
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	.loc 4 17 10
	movq	$0, -8(%rbp)
	.loc 4 18 5
	leaq	-8(%rbp), %rax
	leaq	.LC2(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 19 5
	leaq	-8(%rbp), %rax
	leaq	.LC3(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 20 5
	leaq	-8(%rbp), %rax
	leaq	.LC4(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 21 5
	leaq	-8(%rbp), %rax
	leaq	.LC5(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 22 5
	leaq	-8(%rbp), %rax
	leaq	.LC6(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 23 5
	leaq	-8(%rbp), %rax
	leaq	.LC7(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 24 5
	leaq	-8(%rbp), %rax
	leaq	.LC8(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 25 5
	leaq	-8(%rbp), %rax
	leaq	.LC9(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 26 5
	leaq	-8(%rbp), %rax
	leaq	.LC10(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 27 5
	leaq	-8(%rbp), %rax
	leaq	.LC11(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 28 5
	leaq	-8(%rbp), %rax
	leaq	.LC12(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 29 5
	leaq	-8(%rbp), %rax
	leaq	.LC13(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 30 5
	leaq	-8(%rbp), %rax
	leaq	.LC14(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 31 5
	leaq	-8(%rbp), %rax
	leaq	.LC14(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 32 5
	leaq	-8(%rbp), %rax
	leaq	.LC15(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 33 5
	leaq	-8(%rbp), %rax
	leaq	.LC16(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 34 5
	leaq	-8(%rbp), %rax
	leaq	.LC17(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 35 5
	leaq	-8(%rbp), %rax
	leaq	.LC18(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 36 5
	leaq	-8(%rbp), %rax
	leaq	.LC19(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 37 5
	leaq	-8(%rbp), %rax
	leaq	.LC20(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 38 5
	leaq	-8(%rbp), %rax
	leaq	.LC20(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 39 5
	leaq	-8(%rbp), %rax
	leaq	.LC21(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 40 5
	leaq	-8(%rbp), %rax
	leaq	.LC22(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 41 5
	leaq	-8(%rbp), %rax
	leaq	.LC23(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 42 5
	leaq	-8(%rbp), %rax
	leaq	.LC24(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 43 5
	leaq	-8(%rbp), %rax
	leaq	.LC25(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 44 5
	leaq	-8(%rbp), %rax
	leaq	.LC26(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 45 5
	leaq	-8(%rbp), %rax
	leaq	.LC27(%rip), %rsi
	movq	%rax, %rdi
	call	add_node
	.loc 4 46 5
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	print_list
	.loc 4 47 12
	movl	$0, %eax
	.loc 4 48 1
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	main, .-main
.Letext0:
	.file 5 "lists.h"
	.file 6 "/usr/lib/gcc/x86_64-linux-gnu/10/include/stddef.h"
	.section	.debug_info,"",@progbits
.Ldebug_info0:
	.long	0x1f3
	.value	0x4
	.long	.Ldebug_abbrev0
	.byte	0x8
	.uleb128 0x1
	.long	.LASF19
	.byte	0xc
	.long	.LASF20
	.long	.LASF21
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.long	.Ldebug_line0
	.uleb128 0x2
	.long	.LASF12
	.byte	0x6
	.byte	0xd1
	.byte	0x17
	.long	0x39
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF0
	.uleb128 0x4
	.byte	0x4
	.byte	0x5
	.string	"int"
	.uleb128 0x3
	.byte	0x4
	.byte	0x7
	.long	.LASF1
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF2
	.uleb128 0x3
	.byte	0x8
	.byte	0x5
	.long	.LASF3
	.uleb128 0x3
	.byte	0x1
	.byte	0x8
	.long	.LASF4
	.uleb128 0x3
	.byte	0x2
	.byte	0x7
	.long	.LASF5
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF6
	.uleb128 0x3
	.byte	0x2
	.byte	0x5
	.long	.LASF7
	.uleb128 0x5
	.byte	0x8
	.long	0x7e
	.uleb128 0x3
	.byte	0x1
	.byte	0x6
	.long	.LASF8
	.uleb128 0x6
	.long	0x7e
	.uleb128 0x3
	.byte	0x8
	.byte	0x7
	.long	.LASF9
	.uleb128 0x5
	.byte	0x8
	.long	0x85
	.uleb128 0x3
	.byte	0x10
	.byte	0x4
	.long	.LASF10
	.uleb128 0x7
	.long	.LASF22
	.byte	0x18
	.byte	0x5
	.byte	0xa
	.byte	0x10
	.long	0xd3
	.uleb128 0x8
	.string	"str"
	.byte	0x5
	.byte	0xc
	.byte	0xb
	.long	0x78
	.byte	0
	.uleb128 0x8
	.string	"len"
	.byte	0x5
	.byte	0xd
	.byte	0x12
	.long	0x47
	.byte	0x8
	.uleb128 0x9
	.long	.LASF11
	.byte	0x5
	.byte	0xe
	.byte	0x14
	.long	0xd3
	.byte	0x10
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x9e
	.uleb128 0x2
	.long	.LASF13
	.byte	0x5
	.byte	0xf
	.byte	0x3
	.long	0x9e
	.uleb128 0x6
	.long	0xd9
	.uleb128 0xa
	.long	.LASF14
	.byte	0x4
	.byte	0xd
	.byte	0x5
	.long	0x40
	.quad	.LFB9
	.quad	.LFE9-.LFB9
	.uleb128 0x1
	.byte	0x9c
	.long	0x11c
	.uleb128 0xb
	.long	.LASF16
	.byte	0x4
	.byte	0xf
	.byte	0xd
	.long	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0xd9
	.uleb128 0xa
	.long	.LASF15
	.byte	0x3
	.byte	0xb
	.byte	0x8
	.long	0x2d
	.quad	.LFB8
	.quad	.LFE8-.LFB8
	.uleb128 0x1
	.byte	0x9c
	.long	0x15f
	.uleb128 0xc
	.string	"h"
	.byte	0x3
	.byte	0xb
	.byte	0x21
	.long	0x15f
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xd
	.string	"i"
	.byte	0x3
	.byte	0xd
	.byte	0x8
	.long	0x2d
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0xe5
	.uleb128 0xa
	.long	.LASF17
	.byte	0x2
	.byte	0xb
	.byte	0x9
	.long	0x11c
	.quad	.LFB7
	.quad	.LFE7-.LFB7
	.uleb128 0x1
	.byte	0x9c
	.long	0x1b5
	.uleb128 0xe
	.long	.LASF16
	.byte	0x2
	.byte	0xb
	.byte	0x1b
	.long	0x1b5
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xc
	.string	"str"
	.byte	0x2
	.byte	0xb
	.byte	0x2d
	.long	0x91
	.uleb128 0x2
	.byte	0x91
	.sleb128 -48
	.uleb128 0xb
	.long	.LASF18
	.byte	0x2
	.byte	0xd
	.byte	0x9
	.long	0x11c
	.uleb128 0x2
	.byte	0x91
	.sleb128 -24
	.byte	0
	.uleb128 0x5
	.byte	0x8
	.long	0x11c
	.uleb128 0xf
	.long	.LASF23
	.byte	0x1
	.byte	0x7
	.byte	0x5
	.long	0x40
	.quad	.LFB6
	.quad	.LFE6-.LFB6
	.uleb128 0x1
	.byte	0x9c
	.uleb128 0xc
	.string	"str"
	.byte	0x1
	.byte	0x7
	.byte	0x19
	.long	0x91
	.uleb128 0x2
	.byte	0x91
	.sleb128 -40
	.uleb128 0xd
	.string	"i"
	.byte	0x1
	.byte	0x9
	.byte	0x5
	.long	0x40
	.uleb128 0x2
	.byte	0x91
	.sleb128 -20
	.byte	0
	.byte	0
	.section	.debug_abbrev,"",@progbits
.Ldebug_abbrev0:
	.uleb128 0x1
	.uleb128 0x11
	.byte	0x1
	.uleb128 0x25
	.uleb128 0xe
	.uleb128 0x13
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x1b
	.uleb128 0xe
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x10
	.uleb128 0x17
	.byte	0
	.byte	0
	.uleb128 0x2
	.uleb128 0x16
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x3
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0xe
	.byte	0
	.byte	0
	.uleb128 0x4
	.uleb128 0x24
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3e
	.uleb128 0xb
	.uleb128 0x3
	.uleb128 0x8
	.byte	0
	.byte	0
	.uleb128 0x5
	.uleb128 0xf
	.byte	0
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x6
	.uleb128 0x26
	.byte	0
	.uleb128 0x49
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x7
	.uleb128 0x13
	.byte	0x1
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0xb
	.uleb128 0xb
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0x8
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0x9
	.uleb128 0xd
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x38
	.uleb128 0xb
	.byte	0
	.byte	0
	.uleb128 0xa
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.uleb128 0x1
	.uleb128 0x13
	.byte	0
	.byte	0
	.uleb128 0xb
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xc
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xd
	.uleb128 0x34
	.byte	0
	.uleb128 0x3
	.uleb128 0x8
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xe
	.uleb128 0x5
	.byte	0
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x2
	.uleb128 0x18
	.byte	0
	.byte	0
	.uleb128 0xf
	.uleb128 0x2e
	.byte	0x1
	.uleb128 0x3f
	.uleb128 0x19
	.uleb128 0x3
	.uleb128 0xe
	.uleb128 0x3a
	.uleb128 0xb
	.uleb128 0x3b
	.uleb128 0xb
	.uleb128 0x39
	.uleb128 0xb
	.uleb128 0x27
	.uleb128 0x19
	.uleb128 0x49
	.uleb128 0x13
	.uleb128 0x11
	.uleb128 0x1
	.uleb128 0x12
	.uleb128 0x7
	.uleb128 0x40
	.uleb128 0x18
	.uleb128 0x2116
	.uleb128 0x19
	.byte	0
	.byte	0
	.byte	0
	.section	.debug_aranges,"",@progbits
	.long	0x2c
	.value	0x2
	.long	.Ldebug_info0
	.byte	0x8
	.byte	0
	.value	0
	.value	0
	.quad	.Ltext0
	.quad	.Letext0-.Ltext0
	.quad	0
	.quad	0
	.section	.debug_line,"",@progbits
.Ldebug_line0:
	.section	.debug_str,"MS",@progbits,1
.LASF3:
	.string	"long long int"
.LASF12:
	.string	"size_t"
.LASF18:
	.string	"newnode"
.LASF20:
	.string	"main.c"
.LASF15:
	.string	"print_list"
.LASF16:
	.string	"head"
.LASF0:
	.string	"long unsigned int"
.LASF23:
	.string	"str_len"
.LASF9:
	.string	"long long unsigned int"
.LASF21:
	.string	"/home/nimrod/Desktop/ALX/alx-low_level_programming/0x12-singly_linked_lists"
.LASF17:
	.string	"add_node"
.LASF4:
	.string	"unsigned char"
.LASF2:
	.string	"long int"
.LASF19:
	.string	"GNU C17 10.2.1 20210110 -mtune=generic -march=x86-64 -g -fasynchronous-unwind-tables"
.LASF22:
	.string	"list_s"
.LASF13:
	.string	"list_t"
.LASF5:
	.string	"short unsigned int"
.LASF6:
	.string	"signed char"
.LASF14:
	.string	"main"
.LASF10:
	.string	"long double"
.LASF7:
	.string	"short int"
.LASF1:
	.string	"unsigned int"
.LASF8:
	.string	"char"
.LASF11:
	.string	"next"
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
