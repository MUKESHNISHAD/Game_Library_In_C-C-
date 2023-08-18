void INTRO_CHESS(void)
{	int time=1;
	char character;
	printf("THIS GAME IS A CHESS GAME\n\n");
	sleep(5);
	printf("IN THIS GAME PLAYER'S NAME OF\n\n");
	sleep(time);
	printf("BLACK PLAYER'S.........\n\n");
	sleep(time);
	printf("1.KING REPRESENT (BLACK)   --->  R (RAJA)\n\n");
	sleep(time);
	printf("2.QUEEN REPRESENT (BLACK)  --->  M (MANTRI)\n\n");
	sleep(time);
	printf("3.BISHOP REPRESENT (BLACK) --->  U (UUT)\n\n");
	sleep(time);
	printf("4.KNIGHT REPRESENT (BLACK) --->  G (GHODA)\n\n");
	sleep(time);
	printf("5.ROOK REPRESENT (BLACK) --->    H (HATHI)\n\n");
	sleep(time);
	printf("6.PAWN REPRESENT (BLACK) --->    B (SAINIK / SHIPAHI)\n\n");
	sleep(5);
	
	printf("WHITE PLAYER'S.........\n\n");
	sleep(5);
	printf("1.KING REPRESENT (WHITE)   --->  r (RAJA)\n\n");
	sleep(time);
	printf("2.QUEEN REPRESENT (WHITE)  --->  m (MANTRI)\n\n");
	sleep(time);
	printf("3.BISHOP REPRESENT (WHITE) --->  u (UUT)\n\n");
	sleep(time);
	printf("4.KNIGHT REPRESENT (WHITE) --->  g (GHODA)\n\n");
	sleep(time);
	printf("5.ROOK REPRESENT (WHITE) --->    h (HATHI)\n\n");
	sleep(time);
	printf("6.PAWN REPRESENT (WHITE) --->    w (SAINIK / SHIPAHI)\n\n");
	sleep(time);
	printf("ARE YOU READ IT (y/n)\n");
	scanf("%c",&character);
	if(character=='y')
	{
	printf("PLEASE WAIT\n");
	sleep(5);
	system("cls");
    }
}

