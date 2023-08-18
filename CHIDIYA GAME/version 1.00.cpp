#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int cx=57,cy=20;
long int score=0;
class design {
	private:
		int i,j;
	public:
	
	 int t1=0.5,t2=95;
    void Design()
	{
	for(i=30;i<85;i++)
	    {
			gotoxy(i,10);
			cout<<"=";
			gotoxy(i,25);
			cout<<"=";
		}
	for(j=9;j<28;j++)
	    {
			gotoxy(34,j);
			cout<<"||";
			gotoxy(80,j);
			cout<<"||";
		}
		cout<<"\n\n\n\n\n\n\n\n";
	}
	
};
int main()
{
system("cls");
design obj;
obj.Design();	
char ch=NULL;

int px1=79,py1=24;
int px2=50,py2=24;
gotoxy(66,9);
cout<<"Score -"<<score;
while(1)
{

gotoxy(66,9);
cout<<"Score -"<<score;
obj.Design();
if(kbhit()){
	ch=getch();
	if(ch!=NULL){
	
			gotoxy(cx,cy);
			cout<<" ";
			Sleep(obj.t2);
			cy--;
			gotoxy(cx,cy);
			cout<<"O";
   			Sleep(obj.t2);
	  if( (cy==10) || (cy==25) )
	  	{ return 0;
		  }
     }
	}else{
	
            ch=NULL;
 			gotoxy(cx,cy);
			cout<<" ";
			Sleep(obj.t2);
			++cy;
			gotoxy(cx,cy);
			cout<<"O";
   			Sleep(obj.t2);
   			if( (cy==10) || (cy==25) )
	  	 	{
			   system("cls");
			   gotoxy(40,9);
 			   cout<<"Score -"<<score;
			   gotoxy(40,10);
			   cout<<"GAME - OVER";
			   		cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n";
			   return 0;}
	  }
// LINE CONTAING HERE :
   S :
   // line -> 1
   gotoxy(px1,py1);
   cout<<"  ";
   gotoxy(px1,py1-1);
   cout<<"  ";
   gotoxy(px1,py1-2);
   cout<<"  ";
   gotoxy(px1,py1-3);
   cout<<"  ";
    gotoxy(px1,py1-4);
   cout<<"  ";
   gotoxy(px1,py1-5);
   cout<<"  ";
   gotoxy(px1,py1-10);
   cout<<"  ";
   gotoxy(px1,py1-11);
   cout<<"  ";
   gotoxy(px1,py1-12);
   cout<<"  ";
    gotoxy(px1,py1-13);
   cout<<"  ";
   gotoxy(px1,py1-14);
   cout<<"  ";
   Sleep(obj.t1);
   --px1;
   gotoxy(px1,py1);
    cout<<"||";
   gotoxy(px1,py1-1);
    cout<<"||";
   gotoxy(px1,py1-2);
    cout<<"||";
    
   gotoxy(px1,py1-3);
   cout<<"||";
   gotoxy(px1,py1-4);
   cout<<"||";
   gotoxy(px1,py1-5);
	cout<<"||";
   gotoxy(px1,py1-10);
   cout<<"||";
   gotoxy(px1,py1-11);
   cout<<"||";
   gotoxy(px1,py1-12);
   cout<<"||";
    gotoxy(px1,py1-13);
   cout<<"||";
   gotoxy(px1,py1-14);
   Sleep(obj.t1);
   
    if(
	((cx==px1 || cx==1-px1) && ((cy==py1)||(cy==py1-1)|| (cy==py1-2) || (cy==py1-3)|| (cy==py1-4)|| (cy==py1-5) || (cy==py1-10) || (cy==py1-11)|| (cy==py1-12)|| (cy==py1-13)|| (cy==py1-14)) )
						    ||
	((cx==px2-1 || cx==px2)&& ((cy==py2-1)||(cy==py2-2)||(cy==py2-3)|| (cy==py2-8)|| (cy==py2-9) || (cy==py2-10) || (cy==py2-11)|| (cy==py2-12)|| (cy==py2-13)|| (cy==py2-14))) 
     )
   {
   	system("cls");
   	gotoxy(40,9);
 	cout<<"Score -"<<score;
    gotoxy(40,10);
    cout<<"GAME - OVER";
    
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";

   	return 0;
   }
   if(px1==34)
   { px1=79;py1=24; 
    goto S;
   }
   
//===================================
    // line -> 2
//===================================

   gotoxy(px2,py2);
   cout<<"  ";
   gotoxy(px2,py2-1);
   cout<<"  ";
   gotoxy(px2,py2-2);
   cout<<"  ";
   gotoxy(px2,py2-3);
   cout<<"  ";
    gotoxy(px2,py2-8);
   cout<<"  ";
    gotoxy(px2,py2-9);
   cout<<"  ";
   gotoxy(px2,py2-10);
   cout<<"  ";
   gotoxy(px2,py2-11);
   cout<<"  ";
   gotoxy(px2,py2-12);
   cout<<"  ";
    gotoxy(px2,py2-13);
   cout<<"  ";
   gotoxy(px2,py2-14);
   cout<<"  ";
   Sleep(obj.t1);
   --px2;
   gotoxy(px2,py2);
    cout<<"||";
   gotoxy(px2,py2-1);
    cout<<"||";
   gotoxy(px2,py2-2);
    cout<<"||";
   gotoxy(px2,py2-3);
   cout<<"||";
   gotoxy(px2,py2-8);
   cout<<"||";
   gotoxy(px2,py2-9);
   cout<<"||";
   gotoxy(px2,py2-10);
   cout<<"||";
   gotoxy(px2,py2-11);
   cout<<"||";
   gotoxy(px2,py2-12);
   cout<<"||";
    gotoxy(px2,py2-13);
   cout<<"||";
   gotoxy(px2,py2-14);
   Sleep(obj.t1);
     if(
	(((cx==px1) || cx==1-px1)&& ((cy==py1)||(cy==py1-1)|| (cy==py1-2) || (cy==py1-3)|| (cy==py1-4)|| (cy==py1-5) || (cy==py1-10) || (cy==py1-11)|| (cy==py1-12)|| (cy==py1-13)|| (cy==py1-14)) )
	|| ( (cx==px2-1||cx==px2) && ((cy==py2)||(cy==py2-1)||(cy==py2-2)||(cy==py2-3)|| (cy==py2-8)|| (cy==py2-9) || (cy==py2-10) || (cy==py2-11)|| (cy==py2-12)|| (cy==py2-13)|| (cy==py2-14)) ) 
     )
   {
   	system("cls");
   	gotoxy(40,9);
    cout<<"Score -"<<score;
	gotoxy(40,10);
	cout<<"GAME - OVER";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
   	return 0;
   }
   if(px2==34)
   {  px2=79;py2=24; 
      goto S;
   }
   score=score+5;
}
}//Main Class
// th     ank for watching lets start for run   
