#include<stdio.h>
#include<conio.h>

void main()

{
	int x;
	float reminder;
	clrscr();

	printf(" \n Enter a value of x :");
	scanf("%d",& x);

	reminder=x%2;

	if (reminder==0)
	   {
	    printf(" %d number is even ",x);
	   }
	if (reminder!=0)
	   {
	    printf(" %d number is odd ",x);
	   }

	getch();
}