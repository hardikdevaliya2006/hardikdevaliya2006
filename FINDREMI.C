#include<stdio.h>
#include<conio.h>

void main()
{       float reminder;
	int x;
	clrscr();

	printf("\n Enter value of x : ");
	scanf("%d",& x);

	reminder=x%2;

	printf("\n reminder of %d is : %f",x,reminder);


	getch();
}