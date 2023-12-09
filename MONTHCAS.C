#include<stdio.h>
#include<conio.h>

void main()
{
  int i;
  clrscr();

  printf(" \n\n-->> ENTER MONTH NUMBER FROM 1 TO 12 : ->> ");
  scanf	("%d",&i);


	switch (i)
       {
	case 1 : printf(" \n\n -->> YOU SELECT janvary  ");
	       break;
	case 2 : printf(" \n\n-->> YOU SELECT febvarey  ");
	       break;
	case 3 : printf(" \n\n-->> YOU SELECT march  ");
	       break;
	case 4 : printf(" \n\n-->> YOU SELECT april  ");
	       break;
	case 5 : printf(" \n\n-->> YOU SELECT may  ");
	       break;
	case 6 : printf(" \n\n-->> YOU SELECT june  ");
	       break;
	case 7 : printf(" \n\n-->> YOU SELECT julay  ");
	       break;
	case 8 : printf(" \n\n-->> YOU SELECT ogast  ");
	       break;
	case 9 : printf(" \n\n-->> YOU SELECT spetember  ");
	       break;
	case 10 : printf(" \n\n-->> YOU SELECT octmeber  ");
	       break;
	case 11 : printf(" \n\n-->> YOU SELECT nvember ");
	       break;
	case 12 : printf(" \n\n-->> YOU SELECT disember ");
	       break;
	default : printf("\n\n-->> wrong choice");

	}
	getch();

}

























