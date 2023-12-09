#include<stdio.h>
#include<conio.h>

void main()
{	int a,b;
	char ch;
	clrscr();

	printf(" FOR ADDITION : + \n\n FOR SUBSCARACTION : - \n\n FOR MULTIPICATION : * \n\n FOR DIVISON : / ");
	printf("\n\n*****************************");

	printf("\n\n Enter the opretor : ");
	scanf("%c",& ch);

	printf(" \n Enter the first number : ");
	scanf("%d",& a);


	printf(" \n Enter the second number : ");
	scanf("%d",& b);

	if (ch=='+')
	   {
	    printf(" \n Your addition value is : %d",a+b);
	   }

	if (ch=='-')
	   {
	    printf(" \n Your subsciption value is : %d",a-b);
	   }

	if (ch=='*')
	   {
	    printf(" \n Your muitipication value is : %d",a*b);
	   }
	if (ch=='/')
	   {
	    printf(" \n Your diviseble value is : %d",a/b);
	   }
	getch();


}
