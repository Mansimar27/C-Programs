//Scaling in computer graphics.
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x1,x2,x3,y1,y2,y3,x,y,nx1,nx2,nx3,ny1,ny2,ny3;
clrscr();
printf("Enter coordinates for triangle:\n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("\nEnter scaling factor:\n");
scanf("%d%d",&x,&y);
nx1=x1*x;
nx2=x2*x;
nx3=x3*x;
ny1=y1*y;
ny2=y2*y;
ny3=y3*y;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
}