//prints rainbow (computer graphics).
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i=0,a=0,r=70;
clrscr();
initgraph(&gd,&gm,"C:\\TC\\BGI");
for(i=1;i<100;i++)
{
if(a!=i/20)
a=i/20;
setcolor(a);
delay(25);
arc(300,300,0,180,r+i);
}
getch();
}