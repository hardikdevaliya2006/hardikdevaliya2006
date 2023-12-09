#include <stdio.h>
#include <conio.h>
void main()
{
	int number;
	clrscr();

	printf("\n Enter any numbere : ");
	scanf("%d",& number);

	if (number%3==0)
	   {
	     if (number%9==0)
		{
		 printf(" \n Entered number is diviseble by 3,9.");
		}
	     if (number%9!=0)
		{
		 printf(" \n Enterde number is diviseble 3 but not diviseble by 9. ");
		}
	   }
	if (number%3!=0)
	  {
	    printf(" \n Entered numeber is not diviseble 3,9.");
	   }
	getch();

}