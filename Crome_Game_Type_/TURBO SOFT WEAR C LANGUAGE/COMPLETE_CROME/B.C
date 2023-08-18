#include<stdio.h>
#include<conio.h>
#include<dos.h>
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
     int bx1=56,by1=14,bx2=28,by2=15,bx3=36,by3=12;
    int score=0;
    char cha;
  //end 
  int time=80;
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
						 //  DEGINE THE GAME BODY............START
						 
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
						 
						 
						 	 //  DEGINE THE GAME BODY............END
					
						 
						 
							//  badal
					// 1st
					gotoxy(bx1,by1);
				printf("  ");
				bx1=bx1-(0.002);
					gotoxy(bx1,by1);
				printf("~~");
				sleep(0.008);
					if(bx1==19)
				    { bx1=56;
					by1=14;
					goto st;
					}
					// 2nd
					gotoxy(bx2,by2);
				printf("  ");
				bx2=bx2-(0.002);
					gotoxy(bx2,by2);
				printf("~~");
				sleep(0.008);
					if(bx2==19)
				    { bx2=56;
					by2=16;
					goto st;
					}
					// 3rd
					gotoxy(bx3,by3);
				printf(" ");
				bx3=bx3-(0.002);
		  		 	gotoxy(bx3,by3);
       	  		 	printf("~");
       	  		 	sleep(0.008);
					if(bx3==19)
				    { bx3=56;
					by3=12;
					goto st;
					}
					
					// badal
					gotoxy(x1,y1);
       	  			printf(" ");
       	 		 	x1=x1-1;
		  		 	gotoxy(x1,y1);
       	  		 	printf("Œ");
       	  		 	delay(time);  
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
					delay(time);
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
					delay(time);
					if(x3==20)
					{ 
					 x3=60;
					 y3=19;
					}if((x1==mx && y1==my)||(x2==mx&&y2==my)||(x3==mx&&y3==mx))
							{ system("cls");
							printf("GAME OVER...");
							printf("\nYOUR BEST SCORE (HIGH SCORE) WAS - %d",score);
							exit(1);
							
							}
							gotoxy(55,8);
							printf("BEST SCORE -%d",score);
							score=score+2;
					
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
       	  		 	          delay(time);  
			 	  			if(my<19)  
							{   gotoxy(mx,my);
       	  		 				printf(" ");
       	 		 				my=my+2;
       	 		 				mx=mx+1;
		  		 				gotoxy(mx,my);
       	  		 				printf("X");
       	  						delay(time);
       	  					 } 
       	  					 /*if(mx2==33)
       	  					 { mx2=30;
       	  					 goto st1;
								  }
       	  					 */
       	  				
       	  					   if(mx>58)
       	  					 { mx=30;my=19;
								time=time-3;
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
   				

  
