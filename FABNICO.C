#include<stdio.h>
#include<conio.h>
int main()
{
 int limit,a,b,c,i;
 clrscr();
 printf("\n Enter number to find fabnicco series ");
 scanf("%d",&limit);
 a = 0;
 b = 1;
 printf("\n Fabnicco Series: ");
 printf("  %d ",a);
 printf("  %d ",b);
 for(i = 0; i< limit-2;i++)
 {
   c = a+b;
   printf("  %d ",c);
   a = b;
   b = c;
 }
getch();
return 0;
}

