#include<Stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int x=21,y=300,i,row=30,colom=5,c1,c2,c3,c4,c5,c6,c7,c8,score=0,t=0;
char c;
int main()
{ 
 
system("cls");
 for(i=0;i<300;i++)  // LINE SIDE LINE CROSS
 {gotoxy(20,i);
  printf("|");
  gotoxy(30,i);
  printf("|");
  printf("\n");
 }
 
 for(c1=0;c1<297;c1++) // ninja CROSS 1.
 { gotoxy(21,c1);
  printf("X");
  c1=c1+15;
 }
 gotoxy(21,182);
 printf("X");
 gotoxy(26,260); printf("X");   // game ninza forth level IV try only 
 gotoxy(29,294); printf("X");  
 gotoxy(29,280);printf("X"); 
 gotoxy(29,266);printf("X");
 gotoxy(29,284); printf("X");
 gotoxy(29,274);printf("X"); 
 gotoxy(29,260);printf("X"); 
 gotoxy(29,252);printf("X"); 
 gotoxy(29,246);printf("X");
 gotoxy(29,238);printf("X");
 gotoxy(29,232);printf("X");
 gotoxy(29,224);printf("X");
 gotoxy(29,214);printf("X");
 gotoxy(29,210);printf("X"); 
 gotoxy(29,200);printf("X"); 
 gotoxy(29,196);printf("X");
 gotoxy(29,186 );printf("X");
 gotoxy(29,182);printf("X");gotoxy(29,168);printf("X"); gotoxy(29,158);printf("X"); gotoxy(29,154);printf("X"); gotoxy(29,144);printf("X");
 gotoxy(29,140);printf("X");gotoxy(29,130);printf("X");gotoxy(29,126);printf("X");gotoxy(29,116);printf("X");gotoxy(29,112);printf("X");gotoxy(29,102);printf("X");
 gotoxy(29,96);printf("X");gotoxy(29,88);printf("X");gotoxy(29,84);printf("X");gotoxy(29,75);printf("X");gotoxy(29,70);printf("X");gotoxy(29,56);printf("X");gotoxy(29,46);printf("X");
 gotoxy(29,41);printf("X");gotoxy(29,32);printf("X");gotoxy(29,28);printf("X");gotoxy(29,18);printf("X");gotoxy(29,14);printf("X");
 
 
 
 gotoxy(26,270); // save one time
 printf("^");
 gotoxy(26,271);
 printf("^");
 
for(i=21;i<30;i++)   // level pass print out side uper 
 { 
if(i==15)
{gotoxy(i,5);
printf(" ");}
 else
 { gotoxy(i,5);
 printf("^");}
 }

while(c=getch())
  { switch(c)         // this switch case is UPER,LOWER,LEFT,RIGHT AND GAME END.... 
   { 
   case 'w':   
       	    start:
			   while(!kbhit())	
			{ 
				gotoxy(x,y);
       	  		printf(" ");
       	 		y--;
		  		gotoxy(x,y);
       	  		printf("X");
		  		sleep(0.008);
		  		score=score+2;
		  		gotoxy(5,3);					// score
		  		printf("score- %d",score);
			 if(y==0||y==300||x==20 ||x==30)
			{ system("cls");
		  		printf("GAME OVER");
		  		return 0;}
				if(x==21&&y==16||x==21&&y==31||x==21&&y==46||x==21&&y==61||x==21&&y==76||x==21&&y==91||x==21&&y==106||x==21&&y==121||x==21&&y==136||x==21&&y==151||x==21&&y==166||x==21&&y==181||x==21&&y==196||x==21&&y==211||x==21&&y==226||x==21&&y==241||x==21&&y==256
			    ||x==21&&y==272||x==21&&y==287||x==21&&y==301)
				{ 
				  system("cls");
				  printf("game over");
				   return 0; 
				}
				if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
				{ system("cls");
				printf("game over");
 				return 0; 
				}
if(y==5)
{ system("cls"); 
printf("YOU WON");
 return 0; 
}

	}
				break;
    case 's':
	 	  while(!kbhit())
		   {
		  gotoxy(x,y);
		  printf(" ");
		  y++;
		  gotoxy(x,y);
		  printf("X");
		  sleep(0.008);
		  gotoxy(5,3);						// score
		  		printf("score- %d",score);  
		  if(y==0||y==300||x==20 ||x==30){ system("cls");
		  printf("GAME OVER");
		  return 0;}
		  if(x==21&&y==16||x==21&&y==31||x==21&&y==46||x==21&&y==61||x==21&&y==76||x==21&&y==91||x==21&&y==106||x==21&&y==121||x==21&&y==136||x==21&&y==151||x==21&&y==166||x==21&&y==181||x==21&&y==196||x==21&&y==211||x==21&&y==226||x==21&&y==241||x==21&&y==256||x==21&&y==271||x==21&&y==286||x==21&&y==301)
			{ system("cls");
			  printf("game over");
 			  return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
			{ 
			system("cls");
 			printf("game over");
 			return 0; 
			}
if(y==5)				// won level...............
{ system("cls"); 
printf("YOU WON");
 return 0; 
}
	 }
	      break; 	  
    case 'a':
    	  while(!kbhit())
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  if(y>250)
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  x=x-8;
		  }
    	   else
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  x=x-4;
		  }
    	  gotoxy(x,y);
    	  printf("X");
    	  goto start;
		  sleep(0.008);
		  gotoxy(5,3);     				//score
		  printf("score- %d",score);
		  if(y==0||y==300||x==20 ||x==30){
		  system("cls");
	 	  printf("GAME OVER");
		  return 0;
			}
			if(x==21&&y==16||x==21&&y==31||x==21&&y==46||x==21&&y==61||x==21&&y==76||x==21&&y==91||x==21&&y==106||x==21&&y==121||x==21&&y==136||x==21&&y==151||x==21&&y==166||x==21&&y==181||x==21&&y==196||x==21&&y==211||x==21&&y==226||x==21&&y==241||x==21&&y==256||x==21&&y==271||x==21&&y==286||x==21&&y==301)
			{  
			  system("cls");
			  printf("game over");
			  return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
			{system("cls");
 			printf("game over");
			 return 0; 
			}

	
if(y==5)			// won level...............
{ system("cls"); 
printf("YOU WON");
 return 0; 
}
		  }
		  break ;
    case 'd':
		 while(!kbhit())
		 {
		  gotoxy(x,y);
    	  printf(" ");
    	  if(y>250)
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  x=x+8;
		  }
    	   else
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  x=x+4;
		  }
    	  gotoxy(x,y);
    	  printf("X");
    	  goto start;
		  sleep(0.005);
		  gotoxy(5,3);					//  score
		  printf("score- %d",score);
		  	 if(y==0||y==300||x==20 ||x==30)
			 { 
			system("cls");
			printf("GAME OVER");
			return 0;}
			if(x==21&&y==16||x==21&&y==31||x==21&&y==46||x==21&&y==61||x==21&&y==76||x==21&&y==91||x==21&&y==106||x==21&&y==121||x==21&&y==136||x==21&&y==151||x==21&&y==166||x==21&&y==181||x==21&&y==196||x==21&&y==211||x==21&&y==226||x==21&&y==241||x==21&&y==256||x==21&&y==271||x==21&&y==286||x==21&&y==301)
			{ system("cls");
			printf("game over");
 			return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284)
			{system("cls");
 			printf("game over");
 			return 0; 
			}
if(y==5)					// won level...............
{ system("cls"); 
printf("YOU WON");
 return 0; 
}
	
		  }break;
	
  } //switch
  } //loop
	
return 0;	
} 


 
  
