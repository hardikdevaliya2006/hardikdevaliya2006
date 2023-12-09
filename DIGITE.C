#include<stdio.h>
#include<conio.h>

void main()
{	int n;
	clrscr();

	printf(" \n Enter any number : ");
	scanf("%d",& n);

	if (n>99 && n<999)
	 {
	  printf(" \n Entered number is 3 digite.");
	 }
	else
	 {
	  printf(" \n Entered number is not 3 digit.");
	 }
	getch();

}


