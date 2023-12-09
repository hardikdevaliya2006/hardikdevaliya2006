void main()
{
     int a,b;
     clrscr();

     printf("Enter a number  a : - ");
     scanf("%d" ,&a);

     printf("Enter a number  b : - ");
     scanf("%d" ,&b);

     a=a+b;
     b=a-b;
     a=a-b;

     printf("the swipe value is :- %d %d ",a,b);


     getch();
}