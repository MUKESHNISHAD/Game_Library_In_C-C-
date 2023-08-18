#include<stdio.h>
#include<conio.h>
#include<windows.h>
int x=31,y=5;
int lx1=24,ly1=6;
int lx2=33,ly2=10;
int lx3=25,ly3=13;
int lx4=33,ly4=16;
int lx5=25,ly5=18;
int lx6=37,ly6=20;
int lx7=25,ly7=20;
int cut;
int r1,r2,r3,r4,r5,r6;
long int score=0;
void display(void);
struct m
{   int r1,c2;
	char ch;
};
int main(void)
{	struct m a1;
	while(!kbhit())
	{
	display();
	while(a1.ch=getch()){

	switch(a1.ch)
	{
		case 's':
		   
		   while(!kbhit())
		   { st:
		   	display();
		   		gotoxy(1,1);
				printf("Score -> %ld",score);
				score=score+14;
		
		   if((x==lx1)||(x==1+lx1)||(x==2+lx1)||(x==3+lx1)||(x==4+lx1)||(x==5+lx1)||
			  (x==lx2)||(x==1+lx2)||(x==2+lx2)||(x==3+lx2)||(x==4+lx2)||(x==5+lx2)||
			  (x==lx3)||(x==1+lx3)||(x==2+lx3)||(x==3+lx3)||(x==4+lx3)||(x==5+lx3)||
			  (x==lx4)||(x==1+lx4)||(x==2+lx4)||(x==3+lx4)||(x==4+lx4)||(x==5+lx4) 
			  )
			{
				if(y==15)
		  	{
		  		return 0;
			  } 
			gotoxy(x,y);
		  	printf(" ");
		  	--y;
		  	gotoxy(x,y);
		  	printf("O");
		  	sleep(0.1);
		  	if(y==3)
		  	{ system("cls");
			  printf("Score -> %ld",score);
			  return 0;
			}
			}
			else{
				if(y==15)
		  	{
		  		return 0;
			  }
			gotoxy(x,y);
		  	printf(" ");
		  	++y;
		  	gotoxy(x,y);
		  	printf("O");
		  	sleep(0.1);}
		  	st2:
		  	// line 1
		  		if(y==15)
		  	{
		  		return 0;
			  }
			gotoxy(lx1,ly1);
			printf("      ");
			--ly1;
			gotoxy(lx1,ly1);
			printf("WWWWWW"); 
			//line 2
			gotoxy(lx2,ly2);
			printf("      ");
			--ly2;
			gotoxy(lx2,ly2);
			printf("WWWWWW");
			//line 3
			gotoxy(lx3,ly3);
			printf("      ");
			--ly3;
			gotoxy(lx3,ly3);
			printf("WWWWWW");
			//line 4
			gotoxy(lx4,ly4);
			printf("      ");
			--ly4;
			gotoxy(lx4,ly4);
			printf("WWWWWW");
			if(y==17)
		{
			return 0;
		}
			if(ly1==2)
			{ lx1=24;
			  ly1=15;
			  goto st2;
			}
			if(ly2==2)
			{ 
			  lx2=33;
			  ly2=15;
			  goto st2;
			}
			if(ly3==2)
			{ lx3=24;
			  ly3=15;
			  goto st2;
			}
			if(ly4==2)
			{ lx4=33;
			  ly4=15;
			  goto st2;
			}
			
			
			} // s while this is main while (!kbhit())
			break;
		 case 'a':		
			gotoxy(x,y);
		  	printf(" ");
		  	--x;
		  	gotoxy(x,y);
		  	printf("O");
		  	sleep(0.8);
		  	if(y==17)
		{
			return 0;
		}
		  	goto st;
		  	break;
		 case 'd':	
			gotoxy(x,y);
		  	printf(" ");
		  	++x;
		  	gotoxy(x,y);
		  	printf("O");
		 	sleep(0.8);
		 	if(y==17)
		{
			return 0;
		}
		 	goto st;
		 	break;
		 
	}// switch
		
		}
	}
	
	}
	
void display(void){
struct m a1;
 for(a1.r1=20;a1.r1<40;a1.r1++)
 {    gotoxy(a1.r1,2);
 	  printf("¶¶");
 	  gotoxy(a1.r1,16);
 	  printf("¶¶");
 }
 for(a1.c2=2;a1.c2<16;a1.c2++)
 {    gotoxy(20,a1.c2);
 	  printf("¶¶");
 	  gotoxy(40,a1.c2);
 	  printf("¶¶");
 }
}

