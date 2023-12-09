#include<stdio.h>

void main()

{       int x,sum;
	clrscr();

	printf("\n Enter any positive or negative number : ");
	scanf("%d",& x);

	sum=x*(-1);

	if (x>=0)

	   {
	     printf("\n You are absulat valu is %d.",x);
	   }
	if (x<=0)
	   {
	     printf("\n After cnvorting your value is : %d", sum);
	   }

	getch();

}