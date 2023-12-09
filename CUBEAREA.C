#include<stdio.h>

	void main()

{       int l,b,h,area;
	clrscr();

	printf("\n Enter value of l : ");
	scanf("%d",& l);

	printf("\n Enter value of b : ");
	scanf("%d",& b);

	printf("\n Enter value of h : ");
	scanf("%d",& h);

	area=l*b*h;

	printf("\n Your area = %d",area);

	getch();

}