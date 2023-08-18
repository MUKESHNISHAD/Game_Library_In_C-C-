#include<Stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
int main()
{ int x=25,y=300,i,row=30,colom=5,c1,c2,c3,c4,c5,c6,c7,c8,score=0,t=0;
char c;

 for(i=0;i<300;i++)  // LINE SIDE LINE CROSS
 {gotoxy(20,i);
  printf("¶");
  gotoxy(30,i);
  printf("¶");
  printf("\n");
 }
	
 for(c1=0;c1<297;c1++) // CAR CROSS 1.
 { gotoxy(21,c1);
  printf("#");
  c1=c1+15;
 }
 for(c2=0;c2<299;c2++)			 // game cars forth level I
 { gotoxy(23,c2);
   printf("#");
   c2=c2+16;
 }
 for(c3=0;c3<295;c3++)  		// game cars forth level II
 { gotoxy(26,c3);
   printf("#");
   c3=c3+17;
 }
 for(c4=0;c3<295;c3++)  		// game cars forth level III
 { gotoxy(28,c3);
   printf("#");
   c3=c3+19;
 }	
 
 gotoxy(26,260); printf("#");   // game cars forth level IV try only 
 gotoxy(29,294); printf("#");  
 gotoxy(29,280);printf("#"); 
 gotoxy(29,266);printf("#");
 gotoxy(29,284); printf("#");
 gotoxy(29,274);printf("#"); 
 gotoxy(29,260);printf("#"); 
 gotoxy(29,252);printf("#"); 
 gotoxy(29,246);printf("#");
 gotoxy(29,238);printf("#");
 gotoxy(29,232);printf("#");
 gotoxy(29,224);printf("#");
 gotoxy(29,214);printf("#");
 gotoxy(29,210);printf("#"); 
 gotoxy(29,200);printf("#"); 
 gotoxy(29,196);printf("#");
 gotoxy(29,186 );printf("#");
 gotoxy(29,182);printf("#");gotoxy(29,168);printf("#"); gotoxy(29,158);printf("#"); gotoxy(29,154);printf("#"); gotoxy(29,144);printf("#");
 gotoxy(29,140);printf("#");gotoxy(29,130);printf("#");gotoxy(29,126);printf("#");gotoxy(29,116);printf("#");gotoxy(29,112);printf("#");gotoxy(29,102);printf("#");
 gotoxy(29,96);printf("#");gotoxy(29,88);printf("#");gotoxy(29,84);printf("#");gotoxy(29,75);printf("#");gotoxy(29,70);printf("#");gotoxy(29,56);printf("#");gotoxy(29,46);printf("#");
 gotoxy(29,41);printf("#");gotoxy(29,32);printf("#");gotoxy(29,28);printf("#");gotoxy(29,18);printf("#");gotoxy(29,14);printf("#");
 
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
       	  		printf("#");
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
				if(x==23&&y==16||x==23&&y==32||x==23&&y==48||x==23&&y==64||x==23&&y==80||x==23&&y==96||x==23&&y==112||x==23&&y==128||x==23&&y==144||x==23&&y==160||x==23&&y==176||x==23&&y==192||x==23&&y==208||x==23&&y==224||x==23&&y==240||x==23&&y==256||x==23&&y==272||x==23&&y==288||x==23&&y==304)
				{ system("cls");
				printf("game over");
 				return 0; 
				}
				if(x==26&&y==18||x==26&&y==32||x==26&&y==46||x==26&&y==260||x==26&&y==74||x==26&&y==88||x==26&&y==116||x==26&&y==130||x==2&&y==144||x==29&&y==158||x==29&&y==180||x==29&&y==186||x==29&&y==200||x==29&&y==214||x==29&&y==232||x==29&&y==246||x==29&&y==260||x==29&&y==274||x==29&&y==284||x==29&&y==298)
				{system("cls");
 				printf("game over");
 				return 0; 
				}
				if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
				{ system("cls");
				printf("game over");
 				return 0; 
				}
if(y==30)
{ 
main();
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
		  printf("#");
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
			if(x==23&&y==16||x==23&&y==32||x==23&&y==48||x==23&&y==64||x==23&&y==80||x==23&&y==96||x==23&&y==112||x==23&&y==128||x==23&&y==144||x==23&&y==160||x==23&&y==176||x==23&&y==192||x==23&&y==208||x==23&&y==224||x==23&&y==240||x==23&&y==256||x==23&&y==272||x==23&&y==288||x==23&&y==304)
			{
			system("cls");
 			printf("game over");
			return 0; 
			}
			if(x==26&&y==36||x==26&&y==54||x==26&&y==72||x==26&&y==90||x==26&&y==108||x==26&&y==126||x==26&&y==144||x==26&&y==162||x==26&&y==180||x==26&&y==198||x==26&&y==216||x==26&&y==234||x==26&&y==252||x==26&&y==270||x==26&&y==288)
			{	
			system("cls");
 			printf("game over");
 			return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
			{ 
			system("cls");
 			printf("game over");
 			return 0; 
			}
if(y==30)				// won level...............
{ 
main();
}
	 }
	      break; 	  
    case 'a':
    	  while(!kbhit())
		  {
		  gotoxy(x,y);
    	  printf(" ");
    	  x--;
    	  gotoxy(x,y);
    	  printf("#");
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
			if(x==23&&y==16||x==23&&y==32||x==23&&y==48||x==23&&y==64||x==23&&y==80||x==23&&y==96||x==23&&y==112||x==23&&y==128||x==23&&y==144||x==23&&y==160||x==23&&y==176||x==23&&y==192||x==23&&y==208||x==23&&y==224||x==23&&y==240||x==23&&y==256||x==23&&y==272||x==23&&y==288||x==23&&y==304)
			{system("cls");
			 printf("game over");
			 return 0; 
			}
			if(x==26&&y==36||x==26&&y==54||x==26&&y==72||x==26&&y==90||x==26&&y==108||x==26&&y==126||x==26&&y==144||x==26&&y==162||x==26&&y==180||x==26&&y==198||x==26&&y==216||x==26&&y==234||x==26&&y==252||x==26&&y==270||x==26&&y==288)
			{ system("cls");
			printf("game over");
 			return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284||x==29&&y==294)
			{system("cls");
 			printf("game over");
			 return 0; 
			}

	
if(y==30)			// won level...............
{ main();
}
		  }
		  break ;
    case 'd':
		 while(!kbhit())
		 {
		  gotoxy(x,y);
    	  printf(" ");
    	  x++;
    	  gotoxy(x,y);
    	  printf("#");
    	 goto start;
		 sleep(0.008);
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
			if(x==23&&y==16||x==23&&y==32||x==23&&y==48||x==23&&y==64||x==23&&y==80||x==23&&y==96||x==23&&y==112||x==23&&y==128||x==23&&y==144||x==23&&y==160||x==23&&y==176||x==23&&y==192||x==23&&y==208||x==23&&y==224||x==23&&y==240||x==23&&y==256||x==23&&y==272||x==23&&y==288||x==23&&y==304)
			{
			 system("cls");
			printf("game over");
 			return 0; 
			}
			if(x==26&&y==36||x==26&&y==54||x==26&&y==72||x==26&&y==90||x==26&&y==108||x==26&&y==126||x==26&&y==144||x==26&&y==162||x==26&&y==180||x==26&&y==198||x==26&&y==216||x==26&&y==234||x==26&&y==252||x==26&&y==270||x==26&&y==288)
			{
			system("cls");
			printf("game over");
 			return 0; 
			}
			if(x==29&&y==14||x==29&&y==28||x==29&&y==42||x==29&&y==56||x==29&&y==70||x==29&&y==84||x==29&&y==98||x==29&&y==112||x==29&&y==126||x==29&&y==140||x==29&&y==154||x==29&&y==168||x==29&&y==182||x==29&&y==196||x==29&&y==210||x==29&&y==224||x==29&&y==238||x==29&&y==252||x==29&&y==266||x==29&&y==280||x==29&&y==284)
			{system("cls");
 			printf("game over");
 			return 0; 
			}
if(y==30)					// won level...............
{ 
 main();
}
	
		  }break;
	
  } //switch
  } //loop
	
return 0;	
} 


 
  
