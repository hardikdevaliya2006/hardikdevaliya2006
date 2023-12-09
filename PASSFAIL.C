#include<stdio.h>

void main()

{       int mark;
	clrscr();

	printf("\n Enter your mark: ");
	scanf("%d",& mark);

	if (mark>=40)

	   {
	     printf("\n You are pass.");
	   }
	else
	   {
	     printf("\n You are faill.");
	   }

	getch();

}