#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int xs1=240,ys1=250,x1=40,y1=40;
int xs2=240,ys2=250,x2=40,y2=40;
int main()
{int gd=0,gm=1;
initgraph(&gd,&gm,"");
while(!kbhit())
{
while(x2!=0){
ellipse(xs2,ys2,0,360,x2,y2);
ellipse(xs1,ys1,0,360,x1,y1);
delay(50);
clearviewport();
line(240,190,240,320);
x2--;
x1++ ;}
while(x2!=40)
{
ellipse(xs2,ys2,0,360,x2,y2);
ellipse(xs1,ys2,0,360,x1,y1);
delay(50);
clearviewport();
line(240,190,240,320);
x2++;
x1--;
}
}     // while loop main
getch();
return 0;
}
