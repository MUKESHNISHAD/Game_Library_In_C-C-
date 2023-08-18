#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include"E:\mukeh nishad\CHESS\LAST 1 VS 1 PLAYER - CHESS\SOURCE_CODE\USING THROUGH HELP OF GRAPHICS (TEMINAL)\data.h"
#include<graphics.h>
void room(void);
void diplay(void);
void counter(void);
void design(void);
char p[8][8] = {
	{'h','g','u','m','r','u','g','h'},
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

// declear the chess board colors and material's

struct chess_color_declear {
	int x1;
	int y1;
	int x2;
	int y2;
};

int hx,hy;
char sel;
int main() {
	int pox=NULL,poy=NULL;
	register *commad;
	char ch;

	// declear the graphics algothims whereas just commant ..
	int gd=0,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	// END GRAPHICS

	INTRO_CHESS();
//	design();
	diplay();
	gotoxy(55,1);
	printf("WHITE TURN");
	// white.........
white:
	while(1) {

		gotoxy(55,1);
		printf("WHITE TURN");
		gotoxy(1,20);
		scanf("%d%d",&pox,&poy);
		// pyada Player..
		if(p[pox][poy]=='W') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'W'->");
			scanf("%d%d",&hx,&hy);
			// Checking left or right opponets player present or not
			if(((pox+1==hx && poy-1==hy) && ( (p[hx][hy]=='B') ||(p[hx][hy]=='G')||(p[hx][hy]=='U')||(p[hx][hy]=='H')||(p[hx][hy]=='M')))
			        ||((pox+1==hx && poy+1==hy) && ( (p[hx][hy]=='B') ||(p[hx][hy]=='G')||(p[hx][hy]=='U')||(p[hx][hy]=='H')||(p[hx][hy]=='M')))
			  ) {
				p[pox][poy]='-';
				p[hx][hy]='W';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			}
			// SAMANE OR FRONT SIDE PRESENTED OR NOT

			if((p[pox+1][poy]=='B'||p[pox+1][poy]=='G'||p[pox+1][poy]=='H'||p[pox+1][poy]=='U'||p[pox+1][poy]=='W'
			        ||p[pox+1][poy]=='g'||p[pox+1][poy]=='h'||p[pox+1][poy]=='u'||p[pox+1][poy]=='m'||p[pox+1][poy]=='r')
			  ) {
				gotoxy(55,3);
				printf("NO CHANGE");
			} else {
				if( (((pox+1==hx && poy==hy) && (p[hx][hy]=='-')) || ( (pox+2==hx && poy==hy) && (pox==1) ) ) && p[hx][hy]!='W' ) {
					p[pox][poy]='-';
					p[hx][hy]='W';
					diplay();
					gotoxy(55,1);
					printf("BLACK TURN");
					goto black;
				}

			}

		}  // IF CONDITION...
		// End pound (prayda)


		// HATHI................
		//
		if(p[pox][poy]=='h') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'h'->");
			scanf("%d%d",&hx,&hy);
			if
			(
			    // back-side X axis (-)
			    (
			        ((pox==hx && poy-1==hy)|| ( (pox==hx&&poy-2==hy) && (p[hx][hy+1]=='-') ) ||((pox==hx&&poy-3==hy)&&(p[hx][hy+1]=='-')&&(p[hx][hy+2]=='-'))	|| ((pox==hx&&poy-4==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')) || ((pox==hx&&poy-5==hy) && (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')) || ((pox==hx&&poy-6==hy)&& (p[hx][hy+1]=='-') && (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-'))||((pox==hx&&poy-7==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-')&& (p[hx][hy+6]=='-') ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)|| ( (pox==hx&&poy+2==hy) && (p[hx][hy-1]=='-') ) ||((pox==hx&&poy+3==hy)&&(p[hx][hy-1]=='-')&&(p[hx][hy-2]=='-'))	|| ((pox==hx&&poy+4==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')) || ((pox==hx&&poy+5==hy) && (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')) || ((pox==hx&&poy+6==hy)&& (p[hx][hy-1]=='-') && (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-'))||((pox==hx&&poy+7==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-')&& (p[hx][hy-6]=='-') )) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||((pox-2==hx&&poy==hy)&&(p[pox-1][poy]=='-')   ) ||((pox-3==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-'))||((pox-4==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')) ||((pox-5==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-'))||((pox-6==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-') &&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-'))||((pox-7==hx&&poy==hy) &&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-')&&(p[pox-6][poy]=='-')) )  ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||((pox+2==hx&&poy==hy)&&(p[pox+1][poy]=='-')) ||((pox+3==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-'))||((pox+4==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')) ||((pox+5==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-'))||((pox+6==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-') &&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-'))||((pox+7==hx&&poy==hy) &&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-')&&(p[pox+6][poy]=='-')) )
			        ) && (p[hx][hy]!='W'&& p[hx][hy]!='h'&&p[hx][hy]!='g'&&p[hx][hy]!='u'&&p[hx][hy]!='m'&&p[hx][hy]!='r'))
			) {
				p[pox][poy]='-';
				p[hx][hy]='h';
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

		if(p[pox][poy]=='g') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'g' ->");
			scanf("%d%d",&hx,&hy);
			if(
			    ((((pox-2==hx&&poy+1==hy) && (p[hx][hy]!='W'))
			      || ((pox-2==hx&&poy-1==hy)&& (p[hx][hy]!='W'))
			      || ((pox+1==hx&&poy+2==hy)&& (p[hx][hy]!='W'))
			      || ((pox+1==hx&&poy-2==hy)&&(p[hx][hy]!='W'))
			      ||((pox-1==hx&&poy+2==hy) && (p[hx][hy]!='W'))
			      ||((pox-1==hx&&poy-2==hy)&& (p[hx][hy]!='W'))
			      || ((pox+2==hx&&poy+1==hy)&& (p[hx][hy]!='W'))
			      || ((pox+2==hx&&poy-1==hy)&& (p[hx][hy]!='W')))&&
			     (p[hx][hy]!='h'&&p[hx][hy]!='g'&&p[hx][hy]!='u'&&p[hx][hy]!='m'&&p[hx][hy]!='r')
			    )
			) {
				p[pox][poy]='-';
				p[hx][hy]='g';
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
		if(p[pox][poy]=='u') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'u' ->");
			scanf("%d%d",&hx,&hy);
			if
			//Right corner
			( (
			            ( ((pox+1==hx&&poy-1==hy)&&(p[pox+1][poy-1]=='-')) ||((pox+2==hx&&poy-2==hy)&&(p[pox+1][poy-1]=='-'))||((pox+3==hx&&poy-3==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-'))||((pox+4==hx&&poy-4==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-'))||((pox+5==hx&&poy-5==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-'))||((pox+6==hx&&poy-6==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-'))||((pox+7==hx&&poy-7==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-')&&(p[pox-6][poy+6]=='-'))

			            )
			            // left corner..
			            || (( ((pox+1==hx&&poy+1==hy)&&(p[pox+1][poy+1]=='-'))||(((pox+2==hx&&poy+2==hy)&&(p[pox+1][poy+1]=='-'))||((pox+3==hx&&poy+3==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-'))||((pox+4==hx&&poy+4==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-'))||((pox+5==hx&&poy+5==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-'))||((pox+6==hx&&poy+6==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-'))||((pox+7==hx&&poy+7==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-')&&(p[pox+6][poy+6]=='-'))
			                                                                    )))
			            // Right side down corner.
			            || (( ((pox-1==hx&&poy-1==hy)&&(p[pox-1][poy-1]=='-'))||(((pox-2==hx&&poy-2==hy)&&(p[pox-1][poy-1]=='-'))||((pox-3==hx&&poy-3==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-'))||((pox-4==hx&&poy-4==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-'))||((pox-5==hx&&poy-5==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-'))||((pox-6==hx&&poy-6==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-'))||((pox-7==hx&&poy-7==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-')&&(p[pox-6][poy-6]=='-'))
			                                                                    )))
			            // left side down corner..
			            || 	( ((pox-1==hx&&poy+1==hy)&&(p[pox+1][poy-1]=='-'))||(((pox-2==hx&&poy+2==hy)&&(p[pox+1][poy-1]=='-'))||((pox-3==hx&&poy+3==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-'))||((pox-4==hx&&poy+4==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-'))||((pox-5==hx&&poy+5==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-'))||((pox-6==hx&&poy+6==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-'))||((pox-7==hx&&poy+7==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-')&&(p[pox+6][poy-6]=='-'))
			                                                                    )))&& (p[hx][hy]!='W'&&p[hx][hy]!='h'&&p[hx][hy]!='g'&&p[hx][hy]!='u'&&p[hx][hy]!='m'&&p[hx][hy]!='r')	)

				// if condtion

			{
				p[pox][poy]='-';
				p[hx][hy]='u';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			}

			else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'u' ");
			}
		}
		// UTT  END...------------------------------------------------------------------------------------------------

		// KING OF THIS GAME........................................RAJA..........................................
		if(p[pox][poy]=='r') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'r' ->");
			scanf("%d%d",&hx,&hy);
			if( (hx==0 && hy==5) && (p[0][4]=='r')&& (p[0][5]=='-' && p[0][6]=='-' && p[0][7]=='h'))
			{
				p[0][5]='h';
				p[0][6]='r';
			}
			if(p[hx][hy]=='-'&&(p[hx][hy]!='u'&&p[hx][hy]!='g'&&p[hx][hy]!='h'&&p[hx][hy]!='m'&&p[hx][hy]!='W') ) {
				p[pox][poy]='-';
				p[hx][hy]='r';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'r' ");
			}

		}
		// END OF KING MOVE..............................................RAJA.....................


		// MATRI -- KING MASTER OF THIS GAME...

		if(p[pox][poy]=='m') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'm' ->");
			scanf("%d%d",&hx,&hy);
			if( // HATHI..........
			    (
			        ((pox==hx && poy-1==hy)|| ( (pox==hx&&poy-2==hy) && (p[hx][hy+1]=='-') ) ||((pox==hx&&poy-3==hy)&&(p[hx][hy+1]=='-')&&(p[hx][hy+2]=='-'))	|| ((pox==hx&&poy-4==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')) || ((pox==hx&&poy-5==hy) && (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')) || ((pox==hx&&poy-6==hy)&& (p[hx][hy+1]=='-') && (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-'))||((pox==hx&&poy-7==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-')&& (p[hx][hy+6]=='-') ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)|| ( (pox==hx&&poy+2==hy) && (p[hx][hy-1]=='-') ) ||((pox==hx&&poy+3==hy)&&(p[hx][hy-1]=='-')&&(p[hx][hy-2]=='-'))	|| ((pox==hx&&poy+4==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')) || ((pox==hx&&poy+5==hy) && (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')) || ((pox==hx&&poy+6==hy)&& (p[hx][hy-1]=='-') && (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-'))||((pox==hx&&poy+7==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-')&& (p[hx][hy-6]=='-') )) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||((pox-2==hx&&poy==hy)&&(p[pox-1][poy]=='-')   ) ||((pox-3==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-'))||((pox-4==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')) ||((pox-5==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-'))||((pox-6==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-') &&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-'))||((pox-7==hx&&poy==hy) &&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-')&&(p[pox-6][poy]=='-')) )  ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||((pox+2==hx&&poy==hy)&&(p[pox+1][poy]=='-')) ||((pox+3==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-'))||((pox+4==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')) ||((pox+5==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-'))||((pox+6==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-') &&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-'))||((pox+7==hx&&poy==hy) &&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-')&&(p[pox+6][poy]=='-')) )
			        ) && (p[hx][hy]!='W'&& p[hx][hy]!='h'&&p[hx][hy]!='g'&&p[hx][hy]!='u'&&p[hx][hy]!='m'&&p[hx][hy]!='r'))


			    // UTT

			    ||
			    //Right corner
			    ( (
			          ( ((pox+1==hx&&poy-1==hy)&&(p[pox+1][poy-1]=='-')) ||((pox+2==hx&&poy-2==hy)&&(p[pox+1][poy-1]=='-'))||((pox+3==hx&&poy-3==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-'))||((pox+4==hx&&poy-4==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-'))||((pox+5==hx&&poy-5==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-'))||((pox+6==hx&&poy-6==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-'))||((pox+7==hx&&poy-7==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-')&&(p[pox-6][poy+6]=='-'))

			          )
			          // left corner..
			          || (( ((pox+1==hx&&poy+1==hy)&&(p[pox+1][poy+1]=='-'))||(((pox+2==hx&&poy+2==hy)&&(p[pox+1][poy+1]=='-'))||((pox+3==hx&&poy+3==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-'))||((pox+4==hx&&poy+4==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-'))||((pox+5==hx&&poy+5==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-'))||((pox+6==hx&&poy+6==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-'))||((pox+7==hx&&poy+7==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-')&&(p[pox+6][poy+6]=='-'))
			                                                                  )))
			          // Right side down corner.
			          || (( ((pox-1==hx&&poy-1==hy)&&(p[pox-1][poy-1]=='-'))||(((pox-2==hx&&poy-2==hy)&&(p[pox-1][poy-1]=='-'))||((pox-3==hx&&poy-3==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-'))||((pox-4==hx&&poy-4==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-'))||((pox-5==hx&&poy-5==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-'))||((pox-6==hx&&poy-6==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-'))||((pox-7==hx&&poy-7==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-')&&(p[pox-6][poy-6]=='-'))
			                                                                  )))
			          // left side down corner..
			          || 	( ((pox-1==hx&&poy+1==hy)&&(p[pox+1][poy-1]=='-'))||(((pox-2==hx&&poy+2==hy)&&(p[pox+1][poy-1]=='-'))||((pox-3==hx&&poy+3==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-'))||((pox-4==hx&&poy+4==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-'))||((pox-5==hx&&poy+5==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-'))||((pox-6==hx&&poy+6==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-'))||((pox-7==hx&&poy+7==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-')&&(p[pox+6][poy-6]=='-'))
			                                                                  )))&& (p[hx][hy]!='W'&&p[hx][hy]!='h'&&p[hx][hy]!='g'&&p[hx][hy]!='u'&&p[hx][hy]!='m'&&p[hx][hy]!='r')	)

			) {
				p[pox][poy]='-';
				p[hx][hy]='m';
				diplay();
				gotoxy(55,1);
				printf("BLACK TURN");
				goto black;
			} else {
				gotoxy(55,3);
				printf("IN-VAILID MOVE.'m' ");
			}

		}

		// MATRI -- KING MASTER OF THIS GAME...END


	}  // WHILE BODY
	// black.......

//**************************** BLACK - PORTION ********************************************************************************************************************************************

black:
	while(1) {
		gotoxy(1,20);
		scanf("%d%d",&pox,&poy);
		// pyada Player..
		if(p[pox][poy]=='B') {
			gotoxy(2,35);
			printf("ENTER THE BLACK POSITION 'B'->");
			scanf("%d%d",&hx,&hy);
			// Checking left or right opponets player present or not
			if(((pox-1==hx && poy-1==hy) && ( (p[hx][hy]=='W') ||(p[hx][hy]=='G')||(p[hx][hy]=='U')||(p[hx][hy]=='H')||(p[hx][hy]=='M')||(p[hx][hy]=='R')))
			        ||((pox-1==hx && poy+1==hy) && ( (p[hx][hy]=='W') ||(p[hx][hy]=='G')||(p[hx][hy]=='U')||(p[hx][hy]=='H')||(p[hx][hy]=='M')||(p[hx][hy]=='R')))
			  ) {
				p[pox][poy]='-';
				p[hx][hy]='B';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
			}
			// SAMANE OR FRONT SIDE PRESENTED OR NOT

			if((p[pox-1][poy]=='B'||p[pox-1][poy]=='G'||p[pox-1][poy]=='H'||p[pox-1][poy]=='U'||p[pox-1][poy]=='W'
			        ||p[pox-1][poy]=='g'||p[pox-1][poy]=='h'||p[pox-1][poy]=='u'||p[pox-1][poy]=='m'||p[pox-1][poy]=='r')
			  ) {
				gotoxy(55,3);
				printf("NO CHANGE");
			} else {
				if( ((pox-1==hx && poy==hy) && (p[hx][hy]=='-') || ( (pox-2==hx && poy==hy) && (pox==6) )) && p[hx][hy]!='B' ) {
					p[pox][poy]='-';
					p[hx][hy]='B';
					diplay();
					gotoxy(55,1);
					printf("WHITE TURN");
					goto white;
				}

			}

		}  // IF CONDITION...
		// End pound (prayda)

		// HATHI................
		//
		if(p[pox][poy]=='H') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'H'->");
			scanf("%d%d",&hx,&hy);
			if
			(
			    (
			        ((pox==hx && poy-1==hy)|| ( (pox==hx&&poy-2==hy) && (p[hx][hy+1]=='-') ) ||((pox==hx&&poy-3==hy)&&(p[hx][hy+1]=='-')&&(p[hx][hy+2]=='-'))	|| ((pox==hx&&poy-4==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')) || ((pox==hx&&poy-5==hy) && (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')) || ((pox==hx&&poy-6==hy)&& (p[hx][hy+1]=='-') && (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-'))||((pox==hx&&poy-7==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-')&& (p[hx][hy+6]=='-') ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)|| ( (pox==hx&&poy+2==hy) && (p[hx][hy-1]=='-') ) ||((pox==hx&&poy+3==hy)&&(p[hx][hy-1]=='-')&&(p[hx][hy-2]=='-'))	|| ((pox==hx&&poy+4==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')) || ((pox==hx&&poy+5==hy) && (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')) || ((pox==hx&&poy+6==hy)&& (p[hx][hy-1]=='-') && (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-'))||((pox==hx&&poy+7==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-')&& (p[hx][hy-6]=='-') )) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||((pox-2==hx&&poy==hy)&&(p[pox-1][poy]=='-')   ) ||((pox-3==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-'))||((pox-4==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')) ||((pox-5==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-'))||((pox-6==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-') &&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-'))||((pox-7==hx&&poy==hy) &&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-')&&(p[pox-6][poy]=='-')) )  ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||((pox+2==hx&&poy==hy)&&(p[pox+1][poy]=='-')) ||((pox+3==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-'))||((pox+4==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')) ||((pox+5==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-'))||((pox+6==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-') &&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-'))||((pox+7==hx&&poy==hy) &&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-')&&(p[pox+6][poy]=='-')) )
			        ) && (p[hx][hy]!='B'&& p[hx][hy]!='H'&&p[hx][hy]!='G'&&p[hx][hy]!='U'&&p[hx][hy]!='M'&&p[hx][hy]!='R'))
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
			    ((((pox-2==hx&&poy+1==hy) && (p[hx][hy]!='B'))
			      || ((pox-2==hx&&poy-1==hy)&& (p[hx][hy]!='B'))
			      || ((pox+1==hx&&poy+2==hy)&& (p[hx][hy]!='B'))
			      || ((pox+1==hx&&poy-2==hy)&&(p[hx][hy]!='B'))
			      ||((pox-1==hx&&poy+2==hy) && (p[hx][hy]!='B'))
			      ||((pox-1==hx&&poy-2==hy)&& (p[hx][hy]!='B'))
			      || ((pox+2==hx&&poy+1==hy)&& (p[hx][hy]!='B'))
			      || ((pox+2==hx&&poy-1==hy)&& (p[hx][hy]!='B')))&&
			     (p[hx][hy]!='H'&&p[hx][hy]!='G'&&p[hx][hy]!='U'&&p[hx][hy]!='M'&&p[hx][hy]!='R'))

			)

			{
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


		// UTT------------------------------------------------------------------------------------------------------
		if(p[pox][poy]=='U') {
			gotoxy(2,35);
			printf("ENTER THE WHITE POSITION 'U' ->");
			scanf("%d%d",&hx,&hy);
			if(
			    //Right corner
			    ( (
			          ( ((pox+1==hx&&poy-1==hy)&&(p[pox+1][poy-1]=='-')) ||((pox+2==hx&&poy-2==hy)&&(p[pox+1][poy-1]=='-'))||((pox+3==hx&&poy-3==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-'))||((pox+4==hx&&poy-4==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-'))||((pox+5==hx&&poy-5==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-'))||((pox+6==hx&&poy-6==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-'))||((pox+7==hx&&poy-7==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-')&&(p[pox-6][poy+6]=='-'))

			          )
			          // left corner..
			          || (( ((pox+1==hx&&poy+1==hy)&&(p[pox+1][poy+1]=='-'))||(((pox+2==hx&&poy+2==hy)&&(p[pox+1][poy+1]=='-'))||((pox+3==hx&&poy+3==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-'))||((pox+4==hx&&poy+4==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-'))||((pox+5==hx&&poy+5==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-'))||((pox+6==hx&&poy+6==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-'))||((pox+7==hx&&poy+7==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-')&&(p[pox+6][poy+6]=='-'))
			                                                                  )))
			          // Right side down corner.
			          || (( ((pox-1==hx&&poy-1==hy)&&(p[pox-1][poy-1]=='-'))||(((pox-2==hx&&poy-2==hy)&&(p[pox-1][poy-1]=='-'))||((pox-3==hx&&poy-3==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-'))||((pox-4==hx&&poy-4==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-'))||((pox-5==hx&&poy-5==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-'))||((pox-6==hx&&poy-6==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-'))||((pox-7==hx&&poy-7==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-')&&(p[pox-6][poy-6]=='-'))
			                                                                  )))
			          // left side down corner..
			          || 	( ((pox-1==hx&&poy+1==hy)&&(p[pox+1][poy-1]=='-'))||(((pox-2==hx&&poy+2==hy)&&(p[pox+1][poy-1]=='-'))||((pox-3==hx&&poy+3==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-'))||((pox-4==hx&&poy+4==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-'))||((pox-5==hx&&poy+5==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-'))||((pox-6==hx&&poy+6==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-'))||((pox-7==hx&&poy+7==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-')&&(p[pox+6][poy-6]=='-'))
			                                                                  )))&& (p[hx][hy]!='W'&&p[hx][hy]!='H'&&p[hx][hy]!='G'&&p[hx][hy]!='U'&&p[hx][hy]!='M'&&p[hx][hy]!='R')	)

			) // if condtion

			{
				p[pox][poy]='-';
				p[hx][hy]='U';
				diplay();
				gotoxy(55,1);
				printf("WHITE TURN");
				goto white;
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
			printf("ENTER THE BLACK POSITION 'R' ->");
			scanf("%d%d",&hx,&hy);

			if(p[hx][hy]=='-'&&(p[hx][hy]!='U'&&p[hx][hy]!='G'&&p[hx][hy]!='H'&&p[hx][hy]!='M'&&p[hx][hy]!='B')) {
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
			printf("ENTER THE WHITE POSITION 'M' ->");
			scanf("%d%d",&hx,&hy);
			if( // HATHI
			    (
			        ((pox==hx && poy-1==hy)|| ( (pox==hx&&poy-2==hy) && (p[hx][hy+1]=='-') ) ||((pox==hx&&poy-3==hy)&&(p[hx][hy+1]=='-')&&(p[hx][hy+2]=='-'))	|| ((pox==hx&&poy-4==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')) || ((pox==hx&&poy-5==hy) && (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')) || ((pox==hx&&poy-6==hy)&& (p[hx][hy+1]=='-') && (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-'))||((pox==hx&&poy-7==hy)&& (p[hx][hy+1]=='-')&& (p[hx][hy+2]=='-')&& (p[hx][hy+3]=='-')&& (p[hx][hy+4]=='-')&& (p[hx][hy+5]=='-')&& (p[hx][hy+6]=='-') ) ||
			         // right side  X axis (+)
			         ((pox==hx && poy+1==hy)|| ( (pox==hx&&poy+2==hy) && (p[hx][hy-1]=='-') ) ||((pox==hx&&poy+3==hy)&&(p[hx][hy-1]=='-')&&(p[hx][hy-2]=='-'))	|| ((pox==hx&&poy+4==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')) || ((pox==hx&&poy+5==hy) && (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')) || ((pox==hx&&poy+6==hy)&& (p[hx][hy-1]=='-') && (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-'))||((pox==hx&&poy+7==hy)&& (p[hx][hy-1]=='-')&& (p[hx][hy-2]=='-')&& (p[hx][hy-3]=='-')&& (p[hx][hy-4]=='-')&& (p[hx][hy-5]=='-')&& (p[hx][hy-6]=='-') )) ||
			         // up side Y axis (-)
			         ((pox-1==hx && poy==hy)||((pox-2==hx&&poy==hy)&&(p[pox-1][poy]=='-')   ) ||((pox-3==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-'))||((pox-4==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')) ||((pox-5==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-'))||((pox-6==hx&&poy==hy)&&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-') &&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-'))||((pox-7==hx&&poy==hy) &&(p[pox-1][poy]=='-')&&(p[pox-2][poy]=='-')&&(p[pox-3][poy]=='-')&&(p[pox-4][poy]=='-')&&(p[pox-5][poy]=='-')&&(p[pox-6][poy]=='-')) )  ||
			         // down side Y axis (+)
			         ((pox+1==hx && poy==hy)||((pox+2==hx&&poy==hy)&&(p[pox+1][poy]=='-')) ||((pox+3==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-'))||((pox+4==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')) ||((pox+5==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-'))||((pox+6==hx&&poy==hy)&&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-') &&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-'))||((pox+7==hx&&poy==hy) &&(p[pox+1][poy]=='-')&&(p[pox+2][poy]=='-')&&(p[pox+3][poy]=='-')&&(p[pox+4][poy]=='-')&&(p[pox+5][poy]=='-')&&(p[pox+6][poy]=='-')) )
			        ) && (p[hx][hy]!='B'&& p[hx][hy]!='H'&&p[hx][hy]!='G'&&p[hx][hy]!='U'&&p[hx][hy]!='M'&&p[hx][hy]!='R'))


			    // UTT

			    ||
			    //Right corner
			    ( (
			          ( ((pox+1==hx&&poy-1==hy)&&(p[pox+1][poy-1]=='-')) ||((pox+2==hx&&poy-2==hy)&&(p[pox+1][poy-1]=='-'))||((pox+3==hx&&poy-3==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-'))||((pox+4==hx&&poy-4==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-'))||((pox+5==hx&&poy-5==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-'))||((pox+6==hx&&poy-6==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-'))||((pox+7==hx&&poy-7==hy)&&(p[pox-1][poy+1]=='-')&&(p[pox-2][poy+2]=='-')&&(p[pox-3][poy+3]=='-')&&(p[pox-4][poy+4]=='-')&&(p[pox-5][poy+5]=='-')&&(p[pox-6][poy+6]=='-'))

			          )
			          // left corner..
			          || (( ((pox+1==hx&&poy+1==hy)&&(p[pox+1][poy+1]=='-'))||(((pox+2==hx&&poy+2==hy)&&(p[pox+1][poy+1]=='-'))||((pox+3==hx&&poy+3==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-'))||((pox+4==hx&&poy+4==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-'))||((pox+5==hx&&poy+5==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-'))||((pox+6==hx&&poy+6==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-'))||((pox+7==hx&&poy+7==hy)&&(p[pox+1][poy+1]=='-')&&(p[pox+2][poy+2]=='-')&&(p[pox+3][poy+3]=='-')&&(p[pox+4][poy+4]=='-')&&(p[pox+5][poy+5]=='-')&&(p[pox+6][poy+6]=='-'))
			                                                                  )))
			          // Right side down corner.
			          || (( ((pox-1==hx&&poy-1==hy)&&(p[pox-1][poy-1]=='-'))||(((pox-2==hx&&poy-2==hy)&&(p[pox-1][poy-1]=='-'))||((pox-3==hx&&poy-3==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-'))||((pox-4==hx&&poy-4==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-'))||((pox-5==hx&&poy-5==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-'))||((pox-6==hx&&poy-6==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-'))||((pox-7==hx&&poy-7==hy)&&(p[pox-1][poy-1]=='-')&&(p[pox-2][poy-2]=='-')&&(p[pox-3][poy-3]=='-')&&(p[pox-4][poy-4]=='-')&&(p[pox-5][poy-5]=='-')&&(p[pox-6][poy-6]=='-'))
			                                                                  )))
			          // left side down corner..
			          || 	( ((pox-1==hx&&poy+1==hy)&&(p[pox+1][poy-1]=='-'))||(((pox-2==hx&&poy+2==hy)&&(p[pox+1][poy-1]=='-'))||((pox-3==hx&&poy+3==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-'))||((pox-4==hx&&poy+4==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-'))||((pox-5==hx&&poy+5==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-'))||((pox-6==hx&&poy+6==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-'))||((pox-7==hx&&poy+7==hy)&&(p[pox+1][poy-1]=='-')&&(p[pox+2][poy-2]=='-')&&(p[pox+3][poy-3]=='-')&&(p[pox+4][poy-4]=='-')&&(p[pox+5][poy-5]=='-')&&(p[pox+6][poy-6]=='-'))
			                                                                  )))&& (p[hx][hy]!='W'&&p[hx][hy]!='H'&&p[hx][hy]!='G'&&p[hx][hy]!='U'&&p[hx][hy]!='M'&&p[hx][hy]!='R')	)


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
	int i,j;
	int r,c,count=0;
	int x=3,y=2;
	clearviewport();
	design();
	gotoxy(1,1);
	printf("\n");
	for(i=0; i<8; i++) {
		for(j=0; j<8; j++) {
			gotoxy(x,y);
			printf("%c",p[i][j]);
			x=x+5;
		}
		y=y+2;
		x=3;
	}
	// counter
	printf("\n\n");
	for(r=0; r<8; r++) {

		printf("  %d  ",r);
	}
	for(c=2; c<17; c+=2) {
		gotoxy(43,c);
		printf("%d",count);
		count++;
	}

}
void design(void) {
	int color_code;
	// Black Box
	int rx1=5,ry1=9,rx2=5,ry2=260;
	// White Box
	int wx1=5,wy1=9,wx2=310,wy2=9;
	int l1,l2,i;
	
	// color code... Declear Here
 	int code_color=15;
	
	for(l1=0; l1<9; l1++) {
		
			// Colom 
			
			line(rx1,ry1,rx2,ry2);
			rx1=rx1+38;
			ry1=9;
			rx2=rx2+38;
			ry2=260;
			
			// Row
			
			line(wx1,wy1,wx2,wy2);
			wx1=5;
			wx2=310;
			wy1=wy1+31;
			wy2=wy2+31;
	
	}
	
	// Diffrent Type's Of Color
	
		// 1st Row
		rx1=5;ry1=9;rx2=5;ry2=260;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=9;
		}
		
		// 2nd Row
		rx1=51;ry1=41;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=51;
		}
		
		// 3rd row
		
		rx1=5;ry1=93;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=93;
		}
		
		// 4th row
		rx1=51;ry1=123;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=123;
		}
		
		// 5rd row
		
		rx1=5;ry1=141;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=141;
		}
		
		// 6th row
		rx1=51;ry1=182;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=182;
		}
		
		// 7rd row
		rx1=5;ry1=223;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=223;
		}
		
		// 8th row
		rx1=51;ry1=250;
		for(i=0;i<4;i++)
		{
		setfillstyle(1,code_color);
		floodfill(rx1+1,ry1+1,WHITE);
		rx1=rx1+76;
		ry1=254;
		}
		
		
}

