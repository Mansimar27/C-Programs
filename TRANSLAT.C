//translation in cgm.
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
void main()
{
int gd=DETECT,gm,x1,x2,x3,y1,y2,y3,xt,yt,nx1,nx2,nx3,ny1,ny2,ny3;
clrscr();
printf("Enter coordinates for triangle:\n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
initgraph(&gd,&gm,"c:\\tc\\bgi");
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
printf("\nEnter translation factor:\n");
scanf("%d%d",&xt,&yt);
nx1=x1+xt;
nx2=x2+xt;
nx3=x3+xt;
ny1=y1+yt;
ny2=y2+yt;
ny3=y3+yt;
line(nx1,ny1,nx2,ny2);
line(nx2,ny2,nx3,ny3);
line(nx3,ny3,nx1,ny1);
getch();
}