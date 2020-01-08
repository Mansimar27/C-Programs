//Calculator in C
#include<stdio.h>
#include<conio.h>
/*void load()
{
printf("Loading");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
printf(".");
sleep(1);
}*/
void main()
{
int a,b,r,c;
clrscr();
printf("\nENTER TWO NUMBERS:\n");
scanf("%d%d",&a,&b);
printf("\nWelcome to C-Calci\nMenu-\n1. +\n2. -\n3. *\n4./\n5. %\n6.Exit\n");
printf("\nENTER OPERATOR CHOICE:");
scanf("%d",&c);
switch(c)
{
case 1:r=a+b;
	 break;
case 2:r=a-b;
	 break;
case 3:r=a*b;
	 break;
case 4:r=a/b;
	 break;
case 5:r=a%b;
	 break;
default:break;
}
//load();
printf("\nRESULT = %d",r);
//printf("\nThank You ");
getch();
}