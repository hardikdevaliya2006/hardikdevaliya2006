#include<stdio.h>
#include<conio.h>
    void main()

{   char ch;
    clrscr();

    printf("\nEnter a charecter : ");
    scanf("%c",& ch);

    if (ch=='A' && 'Z' )
       {
	printf("it is capital");
       }
     if (ch=='b' && 'a' )
       {
	printf("it is samll");
       }
	getch();
}