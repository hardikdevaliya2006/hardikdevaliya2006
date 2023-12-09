void main()
{
     int a,b,c;
     clrscr();

     printf("Enter a number  a : - ");
     scanf("%d" ,&a);

     printf("Enter a number  b : - ");
     scanf("%d" ,&b);

     c=a+b;
     b=c-b;
     a=c-a;

     printf("Your swaip value is : - %d %d ",a,b);

     getch();
}