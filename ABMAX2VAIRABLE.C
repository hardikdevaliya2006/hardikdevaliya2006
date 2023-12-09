#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     clrscr();

     printf("enter number a : - ");
     scanf("%d" ,&a);

     printf("enter number b : - ");
     scanf("%d" ,&b);

     printf("enter number c : - ");
     scanf("%d" ,&c);

     if(a>b)
     {     if(a>c)
	printf("\n a is big ");
     }
     else
     {   if(b>a)

	printf("\n b is big ");
     }
     getch();
}