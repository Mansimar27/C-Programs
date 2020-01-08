//To plot a pixel on screen.
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,x,y;
clrscr();
printf("Enter x and y:\n");
scanf("%d%d",&x,&y);
initgraph(&gd,&gm,"C:\\TC\\bgi");
putpixel(x,y,WHITE);
getch();
closegraph();
}