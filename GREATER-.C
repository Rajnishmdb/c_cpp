#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b;
 clrscr();
 printf("\nEnter any number: ");
 scanf("%d",&a);
 printf("\nEnter another number: ");
 scanf("%d",&b);
 clrscr();
 printf("\nyou have entered numbers %d and %d",a,b);
 if(a == b)
 {
  printf("\nboth numbers are equal");
 }
 if(a > b)
 {
  printf("\nFirst number %d is greater than seecond number %d",a,b);
 }
 if(a < b)
 {
  printf("\nSecond number %d is greater than first number %d",b,a);
 }
 getch();
 return 0;
 }