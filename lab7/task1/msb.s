
msb:     file format elf32-i386


Disassembly of section .init:

000003bc <_init>:
_init():
 3bc:	53                   	push   %ebx
 3bd:	83 ec 08             	sub    $0x8,%esp
 3c0:	e8 bb 00 00 00       	call   480 <__x86.get_pc_thunk.bx>
 3c5:	81 c3 0b 1c 00 00    	add    $0x1c0b,%ebx
 3cb:	8b 83 24 00 00 00    	mov    0x24(%ebx),%eax
 3d1:	85 c0                	test   %eax,%eax
 3d3:	74 05                	je     3da <_init+0x1e>
 3d5:	e8 5e 00 00 00       	call   438 <__gmon_start__@plt>
 3da:	83 c4 08             	add    $0x8,%esp
 3dd:	5b                   	pop    %ebx
 3de:	c3                   	ret    

Disassembly of section .plt:

000003e0 <.plt>:
 3e0:	ff b3 04 00 00 00    	pushl  0x4(%ebx)
 3e6:	ff a3 08 00 00 00    	jmp    *0x8(%ebx)
 3ec:	00 00                	add    %al,(%eax)
	...

000003f0 <printf@plt>:
 3f0:	ff a3 0c 00 00 00    	jmp    *0xc(%ebx)
 3f6:	68 00 00 00 00       	push   $0x0
 3fb:	e9 e0 ff ff ff       	jmp    3e0 <.plt>

00000400 <__libc_start_main@plt>:
 400:	ff a3 10 00 00 00    	jmp    *0x10(%ebx)
 406:	68 08 00 00 00       	push   $0x8
 40b:	e9 d0 ff ff ff       	jmp    3e0 <.plt>

00000410 <putchar@plt>:
 410:	ff a3 14 00 00 00    	jmp    *0x14(%ebx)
 416:	68 10 00 00 00       	push   $0x10
 41b:	e9 c0 ff ff ff       	jmp    3e0 <.plt>

00000420 <atoi@plt>:
 420:	ff a3 18 00 00 00    	jmp    *0x18(%ebx)
 426:	68 18 00 00 00       	push   $0x18
 42b:	e9 b0 ff ff ff       	jmp    3e0 <.plt>

Disassembly of section .plt.got:

00000430 <__cxa_finalize@plt>:
 430:	ff a3 20 00 00 00    	jmp    *0x20(%ebx)
 436:	66 90                	xchg   %ax,%ax

00000438 <__gmon_start__@plt>:
 438:	ff a3 24 00 00 00    	jmp    *0x24(%ebx)
 43e:	66 90                	xchg   %ax,%ax

Disassembly of section .text:

00000440 <_start>:
_start():
 440:	31 ed                	xor    %ebp,%ebp
 442:	5e                   	pop    %esi
 443:	89 e1                	mov    %esp,%ecx
 445:	83 e4 f0             	and    $0xfffffff0,%esp
 448:	50                   	push   %eax
 449:	54                   	push   %esp
 44a:	52                   	push   %edx
 44b:	e8 22 00 00 00       	call   472 <_start+0x32>
 450:	81 c3 80 1b 00 00    	add    $0x1b80,%ebx
 456:	8d 83 40 e8 ff ff    	lea    -0x17c0(%ebx),%eax
 45c:	50                   	push   %eax
 45d:	8d 83 e0 e7 ff ff    	lea    -0x1820(%ebx),%eax
 463:	50                   	push   %eax
 464:	51                   	push   %ecx
 465:	56                   	push   %esi
 466:	ff b3 28 00 00 00    	pushl  0x28(%ebx)
 46c:	e8 8f ff ff ff       	call   400 <__libc_start_main@plt>
 471:	f4                   	hlt    
 472:	8b 1c 24             	mov    (%esp),%ebx
 475:	c3                   	ret    
 476:	66 90                	xchg   %ax,%ax
 478:	66 90                	xchg   %ax,%ax
 47a:	66 90                	xchg   %ax,%ax
 47c:	66 90                	xchg   %ax,%ax
 47e:	66 90                	xchg   %ax,%ax

00000480 <__x86.get_pc_thunk.bx>:
__x86.get_pc_thunk.bx():
 480:	8b 1c 24             	mov    (%esp),%ebx
 483:	c3                   	ret    
 484:	66 90                	xchg   %ax,%ax
 486:	66 90                	xchg   %ax,%ax
 488:	66 90                	xchg   %ax,%ax
 48a:	66 90                	xchg   %ax,%ax
 48c:	66 90                	xchg   %ax,%ax
 48e:	66 90                	xchg   %ax,%ax

00000490 <deregister_tm_clones>:
deregister_tm_clones():
 490:	e8 e4 00 00 00       	call   579 <__x86.get_pc_thunk.dx>
 495:	81 c2 3b 1b 00 00    	add    $0x1b3b,%edx
 49b:	8d 8a 38 00 00 00    	lea    0x38(%edx),%ecx
 4a1:	8d 82 38 00 00 00    	lea    0x38(%edx),%eax
 4a7:	39 c8                	cmp    %ecx,%eax
 4a9:	74 1d                	je     4c8 <deregister_tm_clones+0x38>
 4ab:	8b 82 1c 00 00 00    	mov    0x1c(%edx),%eax
 4b1:	85 c0                	test   %eax,%eax
 4b3:	74 13                	je     4c8 <deregister_tm_clones+0x38>
 4b5:	55                   	push   %ebp
 4b6:	89 e5                	mov    %esp,%ebp
 4b8:	83 ec 14             	sub    $0x14,%esp
 4bb:	51                   	push   %ecx
 4bc:	ff d0                	call   *%eax
 4be:	83 c4 10             	add    $0x10,%esp
 4c1:	c9                   	leave  
 4c2:	c3                   	ret    
 4c3:	90                   	nop
 4c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 4c8:	f3 c3                	repz ret 
 4ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

000004d0 <register_tm_clones>:
register_tm_clones():
 4d0:	e8 a4 00 00 00       	call   579 <__x86.get_pc_thunk.dx>
 4d5:	81 c2 fb 1a 00 00    	add    $0x1afb,%edx
 4db:	55                   	push   %ebp
 4dc:	8d 8a 38 00 00 00    	lea    0x38(%edx),%ecx
 4e2:	8d 82 38 00 00 00    	lea    0x38(%edx),%eax
 4e8:	29 c8                	sub    %ecx,%eax
 4ea:	89 e5                	mov    %esp,%ebp
 4ec:	53                   	push   %ebx
 4ed:	c1 f8 02             	sar    $0x2,%eax
 4f0:	89 c3                	mov    %eax,%ebx
 4f2:	83 ec 04             	sub    $0x4,%esp
 4f5:	c1 eb 1f             	shr    $0x1f,%ebx
 4f8:	01 d8                	add    %ebx,%eax
 4fa:	d1 f8                	sar    %eax
 4fc:	74 14                	je     512 <register_tm_clones+0x42>
 4fe:	8b 92 2c 00 00 00    	mov    0x2c(%edx),%edx
 504:	85 d2                	test   %edx,%edx
 506:	74 0a                	je     512 <register_tm_clones+0x42>
 508:	83 ec 08             	sub    $0x8,%esp
 50b:	50                   	push   %eax
 50c:	51                   	push   %ecx
 50d:	ff d2                	call   *%edx
 50f:	83 c4 10             	add    $0x10,%esp
 512:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 515:	c9                   	leave  
 516:	c3                   	ret    
 517:	89 f6                	mov    %esi,%esi
 519:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00000520 <__do_global_dtors_aux>:
__do_global_dtors_aux():
 520:	55                   	push   %ebp
 521:	89 e5                	mov    %esp,%ebp
 523:	53                   	push   %ebx
 524:	e8 57 ff ff ff       	call   480 <__x86.get_pc_thunk.bx>
 529:	81 c3 a7 1a 00 00    	add    $0x1aa7,%ebx
 52f:	83 ec 04             	sub    $0x4,%esp
 532:	80 bb 38 00 00 00 00 	cmpb   $0x0,0x38(%ebx)
 539:	75 27                	jne    562 <__do_global_dtors_aux+0x42>
 53b:	8b 83 20 00 00 00    	mov    0x20(%ebx),%eax
 541:	85 c0                	test   %eax,%eax
 543:	74 11                	je     556 <__do_global_dtors_aux+0x36>
 545:	83 ec 0c             	sub    $0xc,%esp
 548:	ff b3 34 00 00 00    	pushl  0x34(%ebx)
 54e:	e8 dd fe ff ff       	call   430 <__cxa_finalize@plt>
 553:	83 c4 10             	add    $0x10,%esp
 556:	e8 35 ff ff ff       	call   490 <deregister_tm_clones>
 55b:	c6 83 38 00 00 00 01 	movb   $0x1,0x38(%ebx)
 562:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 565:	c9                   	leave  
 566:	c3                   	ret    
 567:	89 f6                	mov    %esi,%esi
 569:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00000570 <frame_dummy>:
frame_dummy():
 570:	55                   	push   %ebp
 571:	89 e5                	mov    %esp,%ebp
 573:	5d                   	pop    %ebp
 574:	e9 57 ff ff ff       	jmp    4d0 <register_tm_clones>

00000579 <__x86.get_pc_thunk.dx>:
__x86.get_pc_thunk.dx():
 579:	8b 14 24             	mov    (%esp),%edx
 57c:	c3                   	ret    

0000057d <main>:
main():
/home/jdoe/CS232/lab7/task1/msb.c:9
int msb(int x);
void print_binary(int n);

//Please do not modify main().
//All your changes should be made within msb()
int main(int argc, char **argv) {
 57d:	8d 4c 24 04          	lea    0x4(%esp),%ecx
 581:	83 e4 f0             	and    $0xfffffff0,%esp
 584:	ff 71 fc             	pushl  -0x4(%ecx)
 587:	55                   	push   %ebp
 588:	89 e5                	mov    %esp,%ebp
 58a:	53                   	push   %ebx
 58b:	51                   	push   %ecx
 58c:	83 ec 10             	sub    $0x10,%esp
 58f:	e8 ec fe ff ff       	call   480 <__x86.get_pc_thunk.bx>
 594:	81 c3 3c 1a 00 00    	add    $0x1a3c,%ebx
 59a:	89 c8                	mov    %ecx,%eax
/home/jdoe/CS232/lab7/task1/msb.c:10
	if (argc<2) {
 59c:	83 38 01             	cmpl   $0x1,(%eax)
 59f:	7f 1f                	jg     5c0 <main+0x43>
/home/jdoe/CS232/lab7/task1/msb.c:11
		printf("Invoke as %s <n> \n\twhere <n> is an integer\n",argv[0]);
 5a1:	8b 40 04             	mov    0x4(%eax),%eax
 5a4:	8b 00                	mov    (%eax),%eax
 5a6:	83 ec 08             	sub    $0x8,%esp
 5a9:	50                   	push   %eax
 5aa:	8d 83 60 e8 ff ff    	lea    -0x17a0(%ebx),%eax
 5b0:	50                   	push   %eax
 5b1:	e8 3a fe ff ff       	call   3f0 <printf@plt>
 5b6:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:12
		return 1;
 5b9:	b8 01 00 00 00       	mov    $0x1,%eax
 5be:	eb 6d                	jmp    62d <main+0xb0>
/home/jdoe/CS232/lab7/task1/msb.c:14
	}
	int x=atoi(argv[1]);
 5c0:	8b 40 04             	mov    0x4(%eax),%eax
 5c3:	83 c0 04             	add    $0x4,%eax
 5c6:	8b 00                	mov    (%eax),%eax
 5c8:	83 ec 0c             	sub    $0xc,%esp
 5cb:	50                   	push   %eax
 5cc:	e8 4f fe ff ff       	call   420 <atoi@plt>
 5d1:	83 c4 10             	add    $0x10,%esp
 5d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:15
	printf("X= "); 
 5d7:	83 ec 0c             	sub    $0xc,%esp
 5da:	8d 83 8c e8 ff ff    	lea    -0x1774(%ebx),%eax
 5e0:	50                   	push   %eax
 5e1:	e8 0a fe ff ff       	call   3f0 <printf@plt>
 5e6:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:16
	print_binary(x); 
 5e9:	83 ec 0c             	sub    $0xc,%esp
 5ec:	ff 75 f4             	pushl  -0xc(%ebp)
 5ef:	e8 44 01 00 00       	call   738 <print_binary>
 5f4:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:17
	printf("\n");
 5f7:	83 ec 0c             	sub    $0xc,%esp
 5fa:	6a 0a                	push   $0xa
 5fc:	e8 0f fe ff ff       	call   410 <putchar@plt>
 601:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:18
	printf("The most significant bit of %d is at position %d\n",x,msb(x));
 604:	83 ec 0c             	sub    $0xc,%esp
 607:	ff 75 f4             	pushl  -0xc(%ebp)
 60a:	e8 28 00 00 00       	call   637 <msb>
 60f:	83 c4 10             	add    $0x10,%esp
 612:	83 ec 04             	sub    $0x4,%esp
 615:	50                   	push   %eax
 616:	ff 75 f4             	pushl  -0xc(%ebp)
 619:	8d 83 90 e8 ff ff    	lea    -0x1770(%ebx),%eax
 61f:	50                   	push   %eax
 620:	e8 cb fd ff ff       	call   3f0 <printf@plt>
 625:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:19
	return 0;
 628:	b8 00 00 00 00       	mov    $0x0,%eax
/home/jdoe/CS232/lab7/task1/msb.c:20
}
 62d:	8d 65 f8             	lea    -0x8(%ebp),%esp
 630:	59                   	pop    %ecx
 631:	5b                   	pop    %ebx
 632:	5d                   	pop    %ebp
 633:	8d 61 fc             	lea    -0x4(%ecx),%esp
 636:	c3                   	ret    

00000637 <msb>:
msb():
/home/jdoe/CS232/lab7/task1/msb.c:22

int msb(int x) {
 637:	55                   	push   %ebp
 638:	89 e5                	mov    %esp,%ebp
 63a:	53                   	push   %ebx
 63b:	83 ec 24             	sub    $0x24,%esp
 63e:	e8 3d fe ff ff       	call   480 <__x86.get_pc_thunk.bx>
 643:	81 c3 8d 19 00 00    	add    $0x198d,%ebx
/home/jdoe/CS232/lab7/task1/msb.c:23
	if (x==0) return -1;
 649:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 64d:	75 0a                	jne    659 <msb+0x22>
/home/jdoe/CS232/lab7/task1/msb.c:23 (discriminator 1)
 64f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 654:	e9 da 00 00 00       	jmp    733 <msb+0xfc>
/home/jdoe/CS232/lab7/task1/msb.c:35
	//                        |
	//                        ep
	// in which * is a wild card which could be 0 or 1                   
	int w, ep, hw, mask,mask2;
	//int mask = 2147483647;
	w=32; // Number of bits that might contain most significant 1
 659:	c7 45 e4 20 00 00 00 	movl   $0x20,-0x1c(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:36
	ep=0; // Rightmost bit that might contain most significant 1
 660:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:37
	mask = ~0 << w/2;
 667:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 66a:	89 c2                	mov    %eax,%edx
 66c:	c1 ea 1f             	shr    $0x1f,%edx
 66f:	01 d0                	add    %edx,%eax
 671:	d1 f8                	sar    %eax
 673:	ba ff ff ff ff       	mov    $0xffffffff,%edx
 678:	89 c1                	mov    %eax,%ecx
 67a:	d3 e2                	shl    %cl,%edx
 67c:	89 d0                	mov    %edx,%eax
 67e:	89 45 e8             	mov    %eax,-0x18(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:38
	while(w>1) { //Narrow down to a single bit
 681:	e9 a0 00 00 00       	jmp    726 <msb+0xef>
/home/jdoe/CS232/lab7/task1/msb.c:40

	w = w/2;
 686:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 689:	89 c2                	mov    %eax,%edx
 68b:	c1 ea 1f             	shr    $0x1f,%edx
 68e:	01 d0                	add    %edx,%eax
 690:	d1 f8                	sar    %eax
 692:	89 45 e4             	mov    %eax,-0x1c(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:41
	hw = w;
 695:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 698:	89 45 f0             	mov    %eax,-0x10(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:46

		//TODO: Look at half the range of bits
		//TODO: create a mask. 
		// This mask is all one-bits in the left half of the range
		printf("M= "); print_binary(mask); printf(" hw=%d ep=%d\n",hw,ep);
 69b:	83 ec 0c             	sub    $0xc,%esp
 69e:	8d 83 c2 e8 ff ff    	lea    -0x173e(%ebx),%eax
 6a4:	50                   	push   %eax
 6a5:	e8 46 fd ff ff       	call   3f0 <printf@plt>
 6aa:	83 c4 10             	add    $0x10,%esp
 6ad:	83 ec 0c             	sub    $0xc,%esp
 6b0:	ff 75 e8             	pushl  -0x18(%ebp)
 6b3:	e8 80 00 00 00       	call   738 <print_binary>
 6b8:	83 c4 10             	add    $0x10,%esp
 6bb:	83 ec 04             	sub    $0x4,%esp
 6be:	ff 75 ec             	pushl  -0x14(%ebp)
 6c1:	ff 75 f0             	pushl  -0x10(%ebp)
 6c4:	8d 83 c6 e8 ff ff    	lea    -0x173a(%ebx),%eax
 6ca:	50                   	push   %eax
 6cb:	e8 20 fd ff ff       	call   3f0 <printf@plt>
 6d0:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:47
	if (ep == 7 && !(mask & x)) // in lower bits
 6d3:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 6d7:	75 2f                	jne    708 <msb+0xd1>
/home/jdoe/CS232/lab7/task1/msb.c:47 (discriminator 1)
 6d9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 6dc:	23 45 08             	and    0x8(%ebp),%eax
 6df:	85 c0                	test   %eax,%eax
 6e1:	75 25                	jne    708 <msb+0xd1>
/home/jdoe/CS232/lab7/task1/msb.c:49
	{
		mask2 = ~mask;
 6e3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 6e6:	f7 d0                	not    %eax
 6e8:	89 45 f4             	mov    %eax,-0xc(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:50
		mask = (mask2 << hw/2) & mask2;
 6eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 6ee:	89 c2                	mov    %eax,%edx
 6f0:	c1 ea 1f             	shr    $0x1f,%edx
 6f3:	01 d0                	add    %edx,%eax
 6f5:	d1 f8                	sar    %eax
 6f7:	89 c2                	mov    %eax,%edx
 6f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 6fc:	89 d1                	mov    %edx,%ecx
 6fe:	d3 e0                	shl    %cl,%eax
 700:	23 45 f4             	and    -0xc(%ebp),%eax
 703:	89 45 e8             	mov    %eax,-0x18(%ebp)
 706:	eb 1e                	jmp    726 <msb+0xef>
/home/jdoe/CS232/lab7/task1/msb.c:59

	}
	else// in higher bits
	{
		//printf("enters");
		if(ep == 1)
 708:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 70c:	74 18                	je     726 <msb+0xef>
/home/jdoe/CS232/lab7/task1/msb.c:65
		{

		}
		else
		{
			mask = (mask >> hw/2) & mask;
 70e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 711:	89 c2                	mov    %eax,%edx
 713:	c1 ea 1f             	shr    $0x1f,%edx
 716:	01 d0                	add    %edx,%eax
 718:	d1 f8                	sar    %eax
 71a:	89 c2                	mov    %eax,%edx
 71c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 71f:	89 d1                	mov    %edx,%ecx
 721:	d3 f8                	sar    %cl,%eax
 723:	21 45 e8             	and    %eax,-0x18(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:38
	while(w>1) { //Narrow down to a single bit
 726:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 72a:	0f 8f 56 ff ff ff    	jg     686 <msb+0x4f>
/home/jdoe/CS232/lab7/task1/msb.c:79
		//If the left half of the range has a one bit, focus on only the left half
		//else focus on only the right half
		//TODO: You have ruled out either the left half of the range or the right half of the range
		//set up ep and w accordingly
	}
	return ep;
 730:	8b 45 ec             	mov    -0x14(%ebp),%eax
/home/jdoe/CS232/lab7/task1/msb.c:80
}
 733:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 736:	c9                   	leave  
 737:	c3                   	ret    

00000738 <print_binary>:
print_binary():
/home/jdoe/CS232/lab7/task1/msb.c:82
//Do not modify print_binary
void print_binary(int n) {
 738:	55                   	push   %ebp
 739:	89 e5                	mov    %esp,%ebp
 73b:	53                   	push   %ebx
 73c:	83 ec 14             	sub    $0x14,%esp
 73f:	e8 3c fd ff ff       	call   480 <__x86.get_pc_thunk.bx>
 744:	81 c3 8c 18 00 00    	add    $0x188c,%ebx
/home/jdoe/CS232/lab7/task1/msb.c:84
	int i;
	for(i=31;i>=0;i--) {
 74a:	c7 45 f4 1f 00 00 00 	movl   $0x1f,-0xc(%ebp)
 751:	eb 46                	jmp    799 <print_binary+0x61>
/home/jdoe/CS232/lab7/task1/msb.c:85
		printf("%c",(n&1<<i)?'1':'0');
 753:	8b 45 f4             	mov    -0xc(%ebp),%eax
 756:	8b 55 08             	mov    0x8(%ebp),%edx
 759:	89 c1                	mov    %eax,%ecx
 75b:	d3 fa                	sar    %cl,%edx
 75d:	89 d0                	mov    %edx,%eax
 75f:	83 e0 01             	and    $0x1,%eax
 762:	85 c0                	test   %eax,%eax
 764:	74 07                	je     76d <print_binary+0x35>
/home/jdoe/CS232/lab7/task1/msb.c:85 (discriminator 1)
 766:	b8 31 00 00 00       	mov    $0x31,%eax
 76b:	eb 05                	jmp    772 <print_binary+0x3a>
/home/jdoe/CS232/lab7/task1/msb.c:85 (discriminator 2)
 76d:	b8 30 00 00 00       	mov    $0x30,%eax
/home/jdoe/CS232/lab7/task1/msb.c:85 (discriminator 4)
 772:	83 ec 0c             	sub    $0xc,%esp
 775:	50                   	push   %eax
 776:	e8 95 fc ff ff       	call   410 <putchar@plt>
 77b:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:86 (discriminator 4)
		if (0==i%4) printf(" ");
 77e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 781:	83 e0 03             	and    $0x3,%eax
 784:	85 c0                	test   %eax,%eax
 786:	75 0d                	jne    795 <print_binary+0x5d>
/home/jdoe/CS232/lab7/task1/msb.c:86 (discriminator 1)
 788:	83 ec 0c             	sub    $0xc,%esp
 78b:	6a 20                	push   $0x20
 78d:	e8 7e fc ff ff       	call   410 <putchar@plt>
 792:	83 c4 10             	add    $0x10,%esp
/home/jdoe/CS232/lab7/task1/msb.c:84 (discriminator 2)
	for(i=31;i>=0;i--) {
 795:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
/home/jdoe/CS232/lab7/task1/msb.c:84 (discriminator 1)
 799:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 79d:	79 b4                	jns    753 <print_binary+0x1b>
/home/jdoe/CS232/lab7/task1/msb.c:88
	}
}
 79f:	90                   	nop
 7a0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 7a3:	c9                   	leave  
 7a4:	c3                   	ret    
 7a5:	66 90                	xchg   %ax,%ax
 7a7:	66 90                	xchg   %ax,%ax
 7a9:	66 90                	xchg   %ax,%ax
 7ab:	66 90                	xchg   %ax,%ax
 7ad:	66 90                	xchg   %ax,%ax
 7af:	90                   	nop

000007b0 <__libc_csu_init>:
__libc_csu_init():
 7b0:	55                   	push   %ebp
 7b1:	57                   	push   %edi
 7b2:	56                   	push   %esi
 7b3:	53                   	push   %ebx
 7b4:	e8 c7 fc ff ff       	call   480 <__x86.get_pc_thunk.bx>
 7b9:	81 c3 17 18 00 00    	add    $0x1817,%ebx
 7bf:	83 ec 0c             	sub    $0xc,%esp
 7c2:	8b 6c 24 28          	mov    0x28(%esp),%ebp
 7c6:	8d b3 04 ff ff ff    	lea    -0xfc(%ebx),%esi
 7cc:	e8 eb fb ff ff       	call   3bc <_init>
 7d1:	8d 83 00 ff ff ff    	lea    -0x100(%ebx),%eax
 7d7:	29 c6                	sub    %eax,%esi
 7d9:	c1 fe 02             	sar    $0x2,%esi
 7dc:	85 f6                	test   %esi,%esi
 7de:	74 25                	je     805 <__libc_csu_init+0x55>
 7e0:	31 ff                	xor    %edi,%edi
 7e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 7e8:	83 ec 04             	sub    $0x4,%esp
 7eb:	55                   	push   %ebp
 7ec:	ff 74 24 2c          	pushl  0x2c(%esp)
 7f0:	ff 74 24 2c          	pushl  0x2c(%esp)
 7f4:	ff 94 bb 00 ff ff ff 	call   *-0x100(%ebx,%edi,4)
 7fb:	83 c7 01             	add    $0x1,%edi
 7fe:	83 c4 10             	add    $0x10,%esp
 801:	39 fe                	cmp    %edi,%esi
 803:	75 e3                	jne    7e8 <__libc_csu_init+0x38>
 805:	83 c4 0c             	add    $0xc,%esp
 808:	5b                   	pop    %ebx
 809:	5e                   	pop    %esi
 80a:	5f                   	pop    %edi
 80b:	5d                   	pop    %ebp
 80c:	c3                   	ret    
 80d:	8d 76 00             	lea    0x0(%esi),%esi

00000810 <__libc_csu_fini>:
__libc_csu_fini():
 810:	f3 c3                	repz ret 

Disassembly of section .fini:

00000814 <_fini>:
_fini():
 814:	53                   	push   %ebx
 815:	83 ec 08             	sub    $0x8,%esp
 818:	e8 63 fc ff ff       	call   480 <__x86.get_pc_thunk.bx>
 81d:	81 c3 b3 17 00 00    	add    $0x17b3,%ebx
 823:	83 c4 08             	add    $0x8,%esp
 826:	5b                   	pop    %ebx
 827:	c3                   	ret    
