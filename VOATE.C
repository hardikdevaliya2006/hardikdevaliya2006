#include<stdio.h>

void main()

{       int age;
	clrscr();

	printf("\n Enter your age: ");
	scanf("%d",& age);

	if (age>=18)

	   {
	     printf("\n You are eligbile for voat.");
	   }
	else
	   {
	     printf("\n You are not eligble for voat.");
	   }

	getch();

}