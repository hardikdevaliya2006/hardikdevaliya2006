#include<stdio.h>
#include<conio.h>

void main()
{	int cost,selar;
	clrscr();

	printf(" \n Enter your cost price : ");
	scanf("%d",& cost);

	printf(" \n Enter your seal price : ");
	scanf("%d",& selar);

	if (cost>=selar)
	{
	  printf(" \n Your are get %d loss. ",cost-selar);
	}
	if (selar>=cost)
	{
	 printf(" \n Your are get %d profit.",selar-cost);
	}
	getch();

}


