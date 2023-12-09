#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  clrscr();

  printf(" \n\n       ENTER NUMBER FROM 1 TO 7 : ->> ");
  scanf	("%d",&i);


	switch (i)
       {
	case 1 : printf(" \n\n YOU SELECT MONDAY  ");
	       break;
	case 2 : printf(" \n\n YOU SELECT TUSEDAY  ");
	       break;
	case 3 : printf(" \n\n YOU SELECT WENSRDAY  ");
	       break;
	case 4 : printf(" \n\n YOU SELECT THARSDAY  ");
	       break;
	case 5 : printf(" \n\n YOU SELECT WENSDAY  ");
	       break;
	case 6 : printf(" \n\n YOU SELECT SATDAY  ");
	       break;
	case 7 : printf(" \n\n YOU SELECT SUNDAY  ");
	       break;
	default : printf("\n\n wrong choice");

	}
	getch();

	}


