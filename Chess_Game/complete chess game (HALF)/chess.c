
#include<stdio.h>
#include<conio.h>
#include<windows.h>
//#include<graphics.h>
void room(void);
void diplay(void);
void counter(void);
char p[8][8] = {
	{'H','G','U','M','R','U','G','H'},
	{'W','W','W','W','W','W','W','W'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-'},
	{'B','B','B','B','B','B','B','B'},
	{'H','G','U','M','R','U','G','H'}
};
struct chess {
	int move,rotate;
	char* ptr;
};
int hx,hy;
char sel;
int main() {
	int pox=NULL,poy=NULL;
	register *commad;
	char ch;
	diplay();
	gotoxy(55,1);
	printf("WHITE TURN");
	// white.........
white:
	while(1) {

		gotoxy(55,1);
		printf("WHITE TURN");
		gotoxy(0,30);
		scanf("%d%d",&pox,&poy);

		if(p[pox][poy]=='W') {
			// samne
			if(p[pox+1][poy]=='B'||p[pox+1][poy]=='G'||p[pox+1][poy]=='H'||p[pox+1][poy]=='U'||p[pox+1][poy]=='W') {
				gotoxy(55,3);
				printf("NO CHANGE");
			}
			// end samne
			// position change player

			else {
				gotoxy(2,35);
				printf("ENTER THE WHITE POSITION 'W'->");
				scanf("%d%d",&hx,&hy);

				//  THIS IF CONDITION IS A HIT USE FOR POUND PLAYER
				if( ((pox+1==hx && poy-1==hy) && (p[hx][hy]=='B'))|| ((pox+1==hx && poy+1==hy) && (p[hx][hy]=='B'))) {
					p[pox][poy]='-';
					p[hx][hy]='W';
					diplay();
					gotoxy(55,1);
					printf("BLACK TURN");
					goto black;
				}
				// END OF  	//  THIS IF CONDITION IS A HIT USE FOR POUND PLAYER


				if(	 (pox+1==hx && poy==hy) ) {
					p[pox][poy]='-';
					p[hx][hy]='W';
					diplay();
					gotoxy(55,1);
					printf("BLACK TURN");
					goto black;
				}  // IF CONDTION.....

				else {
					gotoxy(55,3);
					printf("IN-VAILID MOVE.");
				}

			}
		}
		// End pound (prayda)


		// HATHI................
		//
		if(p[pox][poy]=='H') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'H'->");
			scanf("%d%d",&hx,&hy);
			if
			(
			    // back-side X axis (-)
			    (
			        ((pox==hx && poy-1==hy)||(pox==hx&&poy-2==hy) ||(pox==hx&&poy-3==hy)||(pox==hx&&poy-4==hy) ||(pox==hx&&poy-5==hy) ||(pox==hx&&poy-6==hy) ||(pox==hx&&poy-7==hy) ) ||
			        // right side  X axis (+)
			        ((pox==hx && poy+1==hy)||(pox==hx&&poy+2==hy) ||(pox==hx&&poy+3==hy)||(pox==hx&&poy+4==hy) ||(pox==hx&&poy+5==hy) ||(pox==hx&&poy+6==hy) ||(pox==hx&&poy+7==hy) ) ||
			        // up side Y axis (-)
			        ((pox-1==hx && poy==hy)||(pox-2==hx&&poy==hy) ||(pox-3==hx&&poy==hy)||(pox-4==hx&&poy==hy) ||(pox-5==hx&&poy==hy) ||(pox-6==hx&&poy==hy) ||(pox-7==hx&&poy==hy) )   ||
			        // down side Y axis (+)
			        ((pox+1==hx && poy==hy)||(pox+2==hx&&poy==hy) ||(pox+3==hx&&poy==hy)||(pox+4==hx&&poy==hy) ||(pox+5==hx&&poy==hy) ||(pox+6==hx&&poy==hy) ||(pox+7==hx&&poy==hy) )
			    ) && p[hx][hy]!='W'
			) {
				p[pox][poy]='-';
				p[hx][hy]='H';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.");
			}
		}
		// Hathi End.............

		//GHODA ................

		if(p[pox][poy]=='G') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'G' ->");
			scanf("%d%d",&hx,&hy);
			if(
			    ((pox-2==hx&&poy+1==hy) && (p[hx][hy]!='W'))
			    || ((pox-2==hx&&poy-1==hy)&& (p[hx][hy]!='W'))
			    || ((pox+1==hx&&poy+2==hy)&& (p[hx][hy]!='W'))
			    || ((pox+1==hx&&poy-2==hy)&&(p[hx][hy]!='W'))
			    ||((pox-1==hx&&poy+2==hy) && (p[hx][hy]!='W'))
			    ||((pox-1==hx&&poy-2==hy)&& (p[hx][hy]!='W'))
			    || ((pox+2==hx&&poy+1==hy)&& (p[hx][hy]!='W'))
			    || ((pox+2==hx&&poy-1==hy)&& (p[hx][hy]!='W'))) {
				p[pox][poy]='-';
				p[hx][hy]='G';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.");
			}
		}
		// GHODA End.

		// UTT------------------------------------------------------------------------------------------------------
		if(p[pox][poy]=='U') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'U' ->");
			scanf("%d%d",&hx,&hy);
			if(
			    //Right corner
			    ((pox+1==hx&&poy-1==hy) ||(pox+2==hx&&poy-2==hy)||(pox+3==hx&&poy-3==hy)||(pox+4==hx&&poy-4==hy)||(pox+5==hx&&poy-5==hy)||(pox+6==hx&&poy-6==hy)||(pox+7==hx&&poy-7==hy)
			    ) && (p[hx][hy]!='W')
			    // left corner..
			    ||	((pox+1==hx&&poy+1==hy) ||(pox+2==hx&&poy+2==hy)||(pox+3==hx&&poy+3==hy)||(pox+4==hx&&poy+4==hy)||(pox+5==hx&&poy+5==hy)||(pox+6==hx&&poy+6==hy)||(pox+7==hx&&poy+7==hy)
			       ) && (p[hx][hy]!='W')
			    // Right side down corner.
			    ||	((pox-1==hx&&poy-1==hy) ||(pox-2==hx&&poy-2==hy)||(pox-3==hx&&poy-3==hy)||(pox-4==hx&&poy-4==hy)||(pox-5==hx&&poy-5==hy)||(pox-6==hx&&poy-6==hy)||(pox-7==hx&&poy-7==hy)
			       ) && (p[hx][hy]!='W')
			    // left side down corner..
			    || 	((pox-1==hx&&poy+1==hy) ||(pox-2==hx&&poy+2==hy)||(pox-3==hx&&poy+3==hy)||(pox-4==hx&&poy+4==hy)||(pox-5==hx&&poy+5==hy)||(pox-6==hx&&poy+6==hy)||(pox-7==hx&&poy+7==hy)
			        ) && (p[hx][hy]!='W')  )

			{
				p[pox][poy]='-';
				p[hx][hy]='U';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			}

			else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'U' ");
			}
		}
		// UTT  END...------------------------------------------------------------------------------------------------

		// KING OF THIS GAME........................................RAJA..........................................
		if(p[pox][poy]=='R') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'R' ->");
			scanf("%d%d",&hx,&hy);
			if(p[hx][hy]=='-'||p[hx][hy]=='U'||p[hx][hy]=='G') {
				p[pox][poy]='-';
				p[hx][hy]='R';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'R' ");
			}

		}
		// END OF KING MOVE..............................................RAJA.....................


		// MATRI -- KING MASTER OF THIS GAME...

		if(p[pox][poy]=='M') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'M' ->");
			scanf("%d%d",&hx,&hy);
			if( // hathi
			    ((
			         ((pox==hx && poy-1==hy)||(pox==hx&&poy-2==hy) ||(pox==hx&&poy-3==hy)||(pox==hx&&poy-4==hy) ||(pox==hx&&poy-5==hy) ||(pox==hx&&poy-6==hy) ||(pox==hx&&poy-7==hy) ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)||(pox==hx&&poy+2==hy) ||(pox==hx&&poy+3==hy)||(pox==hx&&poy+4==hy) ||(pox==hx&&poy+5==hy) ||(pox==hx&&poy+6==hy) ||(pox==hx&&poy+7==hy) ) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||(pox-2==hx&&poy==hy) ||(pox-3==hx&&poy==hy)||(pox-4==hx&&poy==hy) ||(pox-5==hx&&poy==hy) ||(pox-6==hx&&poy==hy) ||(pox-7==hx&&poy==hy) )   ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||(pox+2==hx&&poy==hy) ||(pox+3==hx&&poy==hy)||(pox+4==hx&&poy==hy) ||(pox+5==hx&&poy==hy) ||(pox+6==hx&&poy==hy) ||(pox+7==hx&&poy==hy) ))
			     && p[hx][hy]!='W')

			    ||
			    (
			        //Right corner
			        ((pox+1==hx&&poy-1==hy) ||(pox+2==hx&&poy-2==hy)||(pox+3==hx&&poy-3==hy)||(pox+4==hx&&poy-4==hy)||(pox+5==hx&&poy-5==hy)||(pox+6==hx&&poy-6==hy)||(pox+7==hx&&poy-7==hy)
			        ) && (p[hx][hy]!='W')
			        // left corner..
			        ||	((pox+1==hx&&poy+1==hy) ||(pox+2==hx&&poy+2==hy)||(pox+3==hx&&poy+3==hy)||(pox+4==hx&&poy+4==hy)||(pox+5==hx&&poy+5==hy)||(pox+6==hx&&poy+6==hy)||(pox+7==hx&&poy+7==hy)
			           ) && (p[hx][hy]!='W')
			        // Right side down corner.
			        ||	((pox-1==hx&&poy-1==hy) ||(pox-2==hx&&poy-2==hy)||(pox-3==hx&&poy-3==hy)||(pox-4==hx&&poy-4==hy)||(pox-5==hx&&poy-5==hy)||(pox-6==hx&&poy-6==hy)||(pox-7==hx&&poy-7==hy)
			           ) && (p[hx][hy]!='W')
			        // left side down corner..
			        || 	((pox-1==hx&&poy+1==hy) ||(pox-2==hx&&poy+2==hy)||(pox-3==hx&&poy+3==hy)||(pox-4==hx&&poy+4==hy)||(pox-5==hx&&poy+5==hy)||(pox-6==hx&&poy+6==hy)||(pox-7==hx&&poy+7==hy)
			            ) && (p[hx][hy]!='W')
			    )

			) {
				p[pox][poy]='-';
				p[hx][hy]='M';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'M' ");
			}

		}

		// MATRI -- KING MASTER OF THIS GAME...END


	}  // WHILE BODY
	// black.......

//**************************** BLACK - PORTION ********************************************************************************************************************************************

black:
	while(1) {
		gotoxy(0,30);
		scanf("%d%d",&pox,&poy);
		if(p[pox][poy]=='B') {

			// samne
			if(p[pox-1][poy]=='W'||p[pox-1][poy]=='G'||p[pox-1][poy]=='H'||p[pox-1][poy]=='U'||p[pox-1][poy]=='B')   {
				gotoxy(55,3);
				printf("NO CHANGE");
			}
			// end samne

			// position change player
			else {
				gotoxy(2,35);
				printf("ENTER THE WHITE POSITION 'B'->");
				scanf("%d%d",&hx,&hy);

				//  THIS IF CONDITION IS A HIT USE FOR POUND PLAYER
				if( ((pox-1==hx && poy-1==hy) && (p[hx][hy]=='W'))|| ((pox-1==hx && poy+1==hy) && (p[hx][hy]=='W'))) {
					p[pox][poy]='-';
					p[hx][hy]='B';
					diplay();
					gotoxy(55,1);
					printf("WHITE TURN");
					goto white;
				}
				// END OF  	//  THIS IF CONDITION IS A HIT USE FOR POUND PLAYER


				if(	 (pox-1==hx && poy==hy) ) {
					p[pox][poy]='-';
					p[hx][hy]='B';
					diplay();
					gotoxy(55,1);
					printf("WHITE TURN");
					goto white;
				}  // IF CONDTION.....

				else {
					gotoxy(55,3);
					printf("IN-VAILID MOVE.");
				}

			}
			// End pound (prayda)
			// End position change player
		}
		// HATHI................
		//
		if(p[pox][poy]=='H') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'H'->");
			scanf("%d%d",&hx,&hy);
			if
			(
			    (
			        // back-side X axis (-)
			        ((pox==hx && poy-1==hy)||(pox==hx&&poy-2==hy) ||(pox==hx&&poy-3==hy)||(pox==hx&&poy-4==hy) ||(pox==hx&&poy-5==hy) ||(pox==hx&&poy-6==hy) ||(pox==hx&&poy-7==hy) ) ||
			        // right side  X axis (+)
			        ((pox==hx && poy+1==hy)||(pox==hx&&poy+2==hy) ||(pox==hx&&poy+3==hy)||(pox==hx&&poy+4==hy) ||(pox==hx&&poy+5==hy) ||(pox==hx&&poy+6==hy) ||(pox==hx&&poy+7==hy) ) ||
			        // up side Y axis (-)
			        ((pox-1==hx && poy==hy)||(pox-2==hx&&poy==hy) ||(pox-3==hx&&poy==hy)||(pox-4==hx&&poy==hy) ||(pox-5==hx&&poy==hy) ||(pox-6==hx&&poy==hy) ||(pox-7==hx&&poy==hy) )   ||
			        // down side Y axis (+)
			        ((pox+1==hx && poy==hy)||(pox+2==hx&&poy==hy) ||(pox+3==hx&&poy==hy)||(pox+4==hx&&poy==hy) ||(pox+5==hx&&poy==hy) ||(pox+6==hx&&poy==hy) ||(pox+7==hx&&poy==hy) )

			    ) && p[hx][hy]!='B'
			) {
				p[pox][poy]='-';
				p[hx][hy]='H';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.");
			}
		}
		// Hathi End.............

		// GHODA
		if(p[pox][poy]=='G') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'G' ->");
			scanf("%d%d",&hx,&hy);
			if(
			    ((pox-2==hx&&poy+1==hy) && (p[hx][hy]!='B'))
			    || ((pox-2==hx&&poy-1==hy)&& (p[hx][hy]!='B'))
			    || ((pox+1==hx&&poy+2==hy)&& (p[hx][hy]!='B'))
			    || ((pox+1==hx&&poy-2==hy)&&(p[hx][hy]!='B'))
			    ||((pox-1==hx&&poy+2==hy) && (p[hx][hy]!='B'))
			    ||((pox-1==hx&&poy-2==hy)&& (p[hx][hy]!='B'))
			    || ((pox+2==hx&&poy+1==hy)&& (p[hx][hy]!='B'))
			    || ((pox+2==hx&&poy-1==hy)&& (p[hx][hy]!='B'))) {
				p[pox][poy]='-';
				p[hx][hy]='G';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.");
			}
		}
		// GHODA End.
		// END GHODA

		// UTT ...------------------------------------------------------------------------------------------------------
		if(p[pox][poy]=='U') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'U' ->");
			scanf("%d%d",&hx,&hy);

			if(
			    //Right corner
			    ((pox+1==hx&&poy-1==hy) ||(pox+2==hx&&poy-2==hy)||(pox+3==hx&&poy-3==hy)||(pox+4==hx&&poy-4==hy)||(pox+5==hx&&poy-5==hy)||(pox+6==hx&&poy-6==hy)||(pox+7==hx&&poy-7==hy)
			    ) && (p[hx][hy]!='B')
			    // left corner..
			    ||	((pox+1==hx&&poy+1==hy) ||(pox+2==hx&&poy+2==hy)||(pox+3==hx&&poy+3==hy)||(pox+4==hx&&poy+4==hy)||(pox+5==hx&&poy+5==hy)||(pox+6==hx&&poy+6==hy)||(pox+7==hx&&poy+7==hy)
			       ) && (p[hx][hy]!='B')
			    // Right side down corner.
			    ||	((pox-1==hx&&poy-1==hy) ||(pox-2==hx&&poy-2==hy)||(pox-3==hx&&poy-3==hy)||(pox-4==hx&&poy-4==hy)||(pox-5==hx&&poy-5==hy)||(pox-6==hx&&poy-6==hy)||(pox-7==hx&&poy-7==hy)
			       ) && (p[hx][hy]!='B')
			    // left side down corner..
			    || 	((pox-1==hx&&poy+1==hy) ||(pox-2==hx&&poy+2==hy)||(pox-3==hx&&poy+3==hy)||(pox-4==hx&&poy+4==hy)||(pox-5==hx&&poy+5==hy)||(pox-6==hx&&poy+6==hy)||(pox-7==hx&&poy+7==hy)
			        ) && (p[hx][hy]!='B')
			)

			{
				p[pox][poy]='-';
				p[hx][hy]='U';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto white;
			}

			else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'U' ");
			}
		}
		// UTT  END...------------------------------------------------------------------------------------------------------

		// KING OF THIS GAME........................................RAJA..........................................
		if(p[pox][poy]=='R') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'R' ->");
			scanf("%d%d",&hx,&hy);

			if(p[hx][hy]=='-'||p[hx][hy]=='U'||p[hx][hy]=='G') {
				p[pox][poy]='-';
				p[hx][hy]='R';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
			}

			else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'R' ");
			}

		}
		// END OF KING MOVE..............................................RAJA.....................

		// MATRI -- KING MASTER OF THIS GAME...

		if(p[pox][poy]=='M') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'M' ->");
			scanf("%d%d",&hx,&hy);
			if( // hathi
			    ((
			         ((pox==hx && poy-1==hy)||(pox==hx&&poy-2==hy) ||(pox==hx&&poy-3==hy)||(pox==hx&&poy-4==hy) ||(pox==hx&&poy-5==hy) ||(pox==hx&&poy-6==hy) ||(pox==hx&&poy-7==hy) ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)||(pox==hx&&poy+2==hy) ||(pox==hx&&poy+3==hy)||(pox==hx&&poy+4==hy) ||(pox==hx&&poy+5==hy) ||(pox==hx&&poy+6==hy) ||(pox==hx&&poy+7==hy) ) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||(pox-2==hx&&poy==hy) ||(pox-3==hx&&poy==hy)||(pox-4==hx&&poy==hy) ||(pox-5==hx&&poy==hy) ||(pox-6==hx&&poy==hy) ||(pox-7==hx&&poy==hy) )   ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||(pox+2==hx&&poy==hy) ||(pox+3==hx&&poy==hy)||(pox+4==hx&&poy==hy) ||(pox+5==hx&&poy==hy) ||(pox+6==hx&&poy==hy) ||(pox+7==hx&&poy==hy) ))
			     && p[hx][hy]!='W')

			    ||
			    (
			        //Right corner
			        ((pox+1==hx&&poy-1==hy) ||(pox+2==hx&&poy-2==hy)||(pox+3==hx&&poy-3==hy)||(pox+4==hx&&poy-4==hy)||(pox+5==hx&&poy-5==hy)||(pox+6==hx&&poy-6==hy)||(pox+7==hx&&poy-7==hy)
			        ) && (p[hx][hy]!='W')
			        // left corner..
			        ||	((pox+1==hx&&poy+1==hy) ||(pox+2==hx&&poy+2==hy)||(pox+3==hx&&poy+3==hy)||(pox+4==hx&&poy+4==hy)||(pox+5==hx&&poy+5==hy)||(pox+6==hx&&poy+6==hy)||(pox+7==hx&&poy+7==hy)
			           ) && (p[hx][hy]!='W')
			        // Right side down corner.
			        ||	((pox-1==hx&&poy-1==hy) ||(pox-2==hx&&poy-2==hy)||(pox-3==hx&&poy-3==hy)||(pox-4==hx&&poy-4==hy)||(pox-5==hx&&poy-5==hy)||(pox-6==hx&&poy-6==hy)||(pox-7==hx&&poy-7==hy)
			           ) && (p[hx][hy]!='W')
			        // left side down corner..
			        || 	((pox-1==hx&&poy+1==hy) ||(pox-2==hx&&poy+2==hy)||(pox-3==hx&&poy+3==hy)||(pox-4==hx&&poy+4==hy)||(pox-5==hx&&poy+5==hy)||(pox-6==hx&&poy+6==hy)||(pox-7==hx&&poy+7==hy)
			            ) && (p[hx][hy]!='W')
			    )

			) {
				p[pox][poy]='-';
				p[hx][hy]='M';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'M' ");
			}

		}

		// MATRI -- KING MASTER OF THIS GAME...END



	}// while condition.
	getch();
	return 0;
}
void diplay(void) {
	system("cls");
	int i,j;
	int r,c,count=0;
	printf("\n");
	for(i=0; i<8; i++) {
		for(j=0; j<8; j++) {
			printf(" %c     ",p[i][j]);
		}
		printf("\n\n\n");
	}
	// counter
	printf("\n");
	for(r=0; r<8; r++) {

		printf("%d     ",r);
	}
	for(c=1; c<=24; c+=3) {
		gotoxy(48,c);
		printf("%d",count);
		count++;
	}

}
