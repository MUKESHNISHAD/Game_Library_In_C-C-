#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{ int x=30,y=46,i,p1=0,p2=70;
  char c;
  int p3=0,p4=0,p5=70,p6=0,p7=0;
  printf("WELCOME IN MY GAME USER\n");
  sleep(4);
  printf("BEFORE STARTING IN GAME AM INTERDUCE MY GAME\n");
  sleep(6);
  printf("1.button w is uper side\n");
  sleep(4);
  printf("2.button s is lower side\n");
  sleep(4);
  printf("3.button a is left side \n");
  sleep(4);
  printf("4.button d is right side \n");
  sleep(4);
  printf("5.@ pattern is a stone are you BUMP then game over\n");
  sleep(4);
  printf("6.* pattern is your life you safe in go to your home\n");
  sleep(6);
  printf("7.please back no use in game computer is confuse\n");
  sleep(4);
  system("cls");
  printf("NOW START PRESS - W");
  sleep(4);  
  gotoxy(28,47);
  printf("|\t|");
   while(c=getch())
   { 
  gotoxy(x,y);
  printf("#\n");
  for(i=0;i<80;i++)
  {gotoxy(i,31);
  printf("-");
  gotoxy(i,33);
  printf("-");
  gotoxy(i,35);
  printf("-");
  gotoxy(i,37);
  printf("-");
  gotoxy(i,39);
  printf("-");
   gotoxy(i,41);
  printf("-");
   gotoxy(i,43);
  printf("-"); 
  gotoxy(i,45);
  printf("-");} 
  if(y==30){
  				    	system("cls");            /// won print
	 					printf(":: YOU WON ::");
	  					return 0;
  }
  if(x==78 || x==0)
  						{ 
						  system("cls");
  						  printf(":: GAME OVER ::");
   						  return 0;
 						 }

 if(p1!=50)
  				 { 	gotoxy(p1,44);
  				 printf("       ");
  				 p1=p1+5;
				   gotoxy(p1,44);
  				    printf("ooooooooo:"); 
				     }
 if(p2!=0)
				 {gotoxy(p2,42);
				   printf("                    ");
				   p2=p2-5;
				  	gotoxy(p2,42);
 					printf(":oooooooo");
 					 } // 7 is important for x axis direction
 
 if(p3!=36)
				{   gotoxy(p3,40);
				printf("             ");
				p3=p3+1;
				 gotoxy(p3,40);
 					printf("oooooooo:");
 					 }
 
 if(p4!=78)
 				 { gotoxy(p4,38);
 				   printf("        ");
 				   p4=p4+6;
				   gotoxy(p4,38);
 					printf("ooooooo:");
 					 }
if(p5!=0)
				 {   gotoxy(p5,36);
					 printf("                  ");
					 p5=p5-4;
				  	 gotoxy(p5,36);
 					 printf(":ooooooooooooooooo");
				 }
if(p6!=70)		 {   gotoxy(p6,34);
					printf("      ");
					p6=p6+2;
                    gotoxy(p6,34);
					printf("oooooooooooooooo:");
					
					 }
if(p7!=60)		 { gotoxy(p7,32);
    				printf("     ");
    			   p7=p7+1;
   					 gotoxy(p6,32);
					printf("ooooooooooooo:");
				 }

  
  if(c=='a')
      			{ gotoxy(x,y);
     			  printf(" ");
				  --x;
	 		      gotoxy(x,y);
	 		      printf("#"); }
	 		     
     
   if(c=='w')
   				{ 
  				 gotoxy(x,y);
      			 printf(" ");
       			 --y;
	 			 gotoxy(x,y);
			     printf("#");
   				}
   if(c=='s')
  			   {
				gotoxy(x,y);
       			printf(" ");
       			++y;
	 			gotoxy(x,y);
				printf("#");
   }
   if(c=='d')
  			   {
				gotoxy(x,y);
       			printf(" ");
       			++x;
	 			gotoxy(x,y);
				printf("#");
   			   }
   			   gotoxy(27 ,34);
   			   printf("@");
   			   gotoxy(33,34);
   			   printf("@");
   			   gotoxy(30 ,34);
   			   printf("@");
   	if((x==27||x==33||x==30)&&y==34)
	   {system("cls");
 printf("game over");
  return 0;}	
	if((x==30||x==33||x==36||x==39||x==42)&&y==32)
	 {system("cls");
 printf("game over");
  return 0;}
   gotoxy(32,32);
  printf("*"); gotoxy(34,32);
  printf("*"); gotoxy(35,32);
  printf("*"); gotoxy(37,32);
  printf("*"); gotoxy(38,32);
  printf("*"); gotoxy(40,32);
  printf("*");
  	
   			   

  if(p1==25 && y==44 || p2== 35 && y==42 || (p3==27||p3==30) && y==40 )
 {
 system("cls");
  printf("game over");
  return 0;
  }
  if((p5==30 && y==36||p5==26&&y==36)||( p6==35||p6==38||p6==29||p6==36)&&y==34) 
 {
  system("cls");
 printf("game over");
  return 0;
  }
  gotoxy(28,32);
  printf("*");
gotoxy(37,32);
  printf("*");


 if(p7==30 && y==32)
 {
 system("cls"); 
 printf("game over");
  return 0;
  }
  
 if( p7==31 && y==32)
 {
 system("cls"); 
 printf("game over");
  return 0;
  }
  gotoxy(30,32);
  printf("*");
  																		if(p7==35)
   																	{   system("cls");
    																	printf("ARE YOU PRESS THE WRONG  BUTTON IN MORE TIME THEN GAME IS END :- ");
																		printf("( game over )");
  																		return 0;
  																	  }
  if(p1==54 &&y==44)
   {system("cls");
    printf("game over");
  return 0;
  }
}
  
  
  return 0;}

  
  
  
  

  
	

