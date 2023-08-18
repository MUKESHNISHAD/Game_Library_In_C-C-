#include<stdio.h>
#include<conio.h>
int main()
{ int a,b,c,d,e,f,g,h,i,j,k,l,m;
  printf("enter the Amount :-\t");
  scanf("%d",&a);
  b=a/1000;c=a%1000;
  d=c/500;e=c%500; 
  f=e/100;g=e%100;
  h=g/50;i=g%50;
  j=i/10;k=i%10;
  l=k/5;m=k%5;
  printf("1000 NOTE is=%d\n",b);
  printf("500  NOTE is=%d\n",d);
  printf("100  NOTE is=%d\n",f);
  printf("50   NOTE is=%d\n",h);
  printf("10   NOTE is=%d\n",j);
  printf("5    NOTE is=%d",l);
  getch();
}
