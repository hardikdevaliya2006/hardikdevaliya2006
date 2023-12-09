#include<stdio.h>
#include<conio.h>
 void main()
 {
   char c;
   int i;
   clrscr();

   printf(" Enter a charcter : ");
   scanf("%c",& c);
   i=c-32;
   printf("i=%d",i);

   printf("  i=%c",i);

   getch();

 }