#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{int gd=0,gm;
initgraph(&gd,&gm,"");
circle(100,80,50);
closegraph();
getch();
return 0;
}
