#include<stdio.h>
#include<conio.h>
#include<windows.h>
struct m
{   int l1,l2;
	float x,y,z;
	char cha;
	int score;
};
int main()
{  // variable
    int x1=59,y1=19,x2=29,y2=19,x3=39,y3=19; // aag
    int mx=25,my=19; // man
    char cha;
  //end 
 struct m a1;
 for(a1.l1=20;a1.l1<60;a1.l1++)
 { gotoxy(a1.l1,20); 
 printf("¶¶");
 gotoxy(a1.l1,10); 
 printf("¶¶");}
 for(a1.l2=10;a1.l2<21;a1.l2++)
 {  gotoxy(19,a1.l2);
 	printf("¶¶");
 	gotoxy(61,a1.l2);
 	printf("¶¶");}
 
 while(1)
		 switch(getch())  
  		      	{ 
				  case 'a':   	
				   st:
				    while(1)
					{
					gotoxy(x1,y1);
       	  			printf(" ");
       	 		 	x1=x1-1;
		  		 	gotoxy(x1,y1);
       	  		 	printf("Œ");
       	  		 	sleep(0.008);  
					if(x1==20)
					{ x1=60;
					  y1=19;
					  goto st;
					}
					gotoxy(x2,y2);
					printf(" ");
					x2=x2-1;
					gotoxy(x2,y2);
					printf("Œ");
					sleep(0.008);
					if(x2==20)
					{ 
					 x2=60;
					 y2=19;
					}
					gotoxy(x3,y3);
					printf(" ");
					x3=x3-1;
					gotoxy(x3,y3);
					printf("Œ");
					sleep(0.008);
					if(x3==20)
					{ 
					 x3=60;
					 y3=19;
					}if((x1==mx && y1==my)||(x2==mx&&y2==my)||(x3==mx&&y3==mx))
							{ system("cls");
							printf("GAME OVER...");
							printf("\nYOUR SCORE WAS - %d",a1.score);
							exit(1);
							
							}
							gotoxy(55,8);
							printf("score-%d",a1.score);
							a1.score=a1.score+2;
					
					while(kbhit())
					{   st1:
						while(cha=getch())
						{
							switch(cha)
							{ case 'w':
							  gotoxy(mx,my);
       	  					  printf(" ");
       	 		 			  my=my-2;
       	 		 			  mx=mx+3;
							  gotoxy(mx,my);
       	  		              printf("X");
       	  		 	          sleep(0.8);  
			 	  			if(my<19)  
							{   gotoxy(mx,my);
       	  		 				printf(" ");
       	 		 				my=my+2;
       	 		 				mx=mx+1;
		  		 				gotoxy(mx,my);
       	  		 				printf("X");
       	  						sleep(0.8);
       	  					 } 
       	  					 /*if(mx2==33)
       	  					 { mx2=30;
       	  					 goto st1;
								  }
       	  					 */
       	  				
       	  					   if(mx>58)
       	  					 { mx=30;my=19;
								goto st1;
								  }
						
       	  					 goto st; 
							if((x1==mx)||(x2==mx)||(x3==mx))
							{ printf("GAME OVER");
							exit(1);
							}
							}
						}
						
					}
					
						   }
				}//switch
					 
   				} 	
   				

  
