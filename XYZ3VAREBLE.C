#include<stdio.h>
#include<conio.h>

void main()
{	int x,y,z;
	clrscr();

	printf(" Enter the value of x : ");
	scanf("%d",& x);

	printf(" \n Enter the value of y : ");
	scanf("%d",& y);

	printf(" \n Enter the value of z : ");
	scanf("%d",& z);

	if (x>y && x>z)
	   {
	    printf(" \n X(%d) is big then y or z.",x);
	   }

	if (y>x && y>z)
	   {
	    printf(" \n Y(%d) is big then x or z.",y);
	   }

	if (z>y && z>x)
	   {
	    printf(" \n Z(%d) is big then y or x.",z);
	   }

	getch();

}







