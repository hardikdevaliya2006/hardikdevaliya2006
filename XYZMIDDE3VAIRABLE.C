#include<stdio.h>
#include<conio.h>

void main()

{       int x,y,z;
	clrscr();

	printf("\n Enter a value of x : ");
	scanf("%d",& x);

	printf("\n Enter a value of y : ");
	scanf("%d",& y);

	printf("\n Enter a value of z : ");
	scanf("%d",& z);

	if((x>y && x<z) || (x>z && x<y))
	  {
	      printf("x is middel");
	  }
	if((y>x && y<z) || (y>z && y<x))
	  {
	      printf("y is middel");
	  }
	if((z>x && z<y) || (z>y && z<x))
	  {
	      printf("z is middel");
	  }

	getch();

}