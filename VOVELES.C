#include<stdio.h>
#include<conio.h>
    void main()

{   char ch; //a e i o u vovel
    clrscr();

    printf("\nEnter a charecter : ");
    scanf("%c",& ch);

    if (ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u')
       {
	printf("it is a vovel ");
       }
    else
       {
	printf("it is a not vovel");
       }
	getch();
}