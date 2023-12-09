#include<stdio.h>
#define pi 3.14159265359

	void main()

{       float r,sum;
	clrscr();

	printf("\n Enter value of r : ");
	scanf("%f",& r);

	sum=pi*r*r;

	printf("\n Your circle area is = %f",sum);

	getch();

}