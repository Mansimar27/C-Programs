//using DDA algo.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,length,x1,y1,i,x2,y2,dx,dy,m,xi,yi;
clrscr();
printf("Enter X1 and Y1:\n");
scanf("%d%d",&x1,&y1);
printf("Enter X2 and Y2:\n");
scanf("%d%d",&x2,&y2);
dx=abs(x2-x1);
dy=abs(y2-y1);
//m=dy/dx;
if(dx>=dy)
{
length=dx;
}
else{
length=dy;
}
xi=dx/length;
yi=dy/length;
initgraph(&gd,&gm,"C:\\TC\\bgi");
for(i=0;i<=length;i++)
{
putpixel(x1,y1,WHITE);
x1=x1+xi;
y1=y1+yi;
}
getch();
closegraph();
for(i=0;i<=length;i++)
{
printf("(%d,%d)\n",x1,y1);
x1=x1+xi;
y1=y1+yi;
}
getch(); }