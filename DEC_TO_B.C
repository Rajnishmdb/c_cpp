#include<stdio.h>
#include<conio.h>
int main()
{
   int n,r,a,d,p;
   long b;
   clrscr();
   printf("enter the value of n: ");
   scanf("%d",&n);
   b = 0;
   a = 1;
   while(n>0)
   {
     r = n % 2;
     b = b + r*a ;
     a = (a * 10 );
     n = n / 2;
   }
   printf(" Binary = %d",b);
   d=0;
   p=0;
   while(b>0)
   {
     r = b % 10;
     d = d + r*pow(2,p) ;
     ++p;
     b = b / 10;
   }
   printf("\n Decimal = %d",d);
   getch();
   return 0;
}


