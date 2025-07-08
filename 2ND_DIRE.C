#include<stdio.h>
#include<conio.h>
void print(int n)
{
 if(n>0)
 {
  printf("\n%d",n);
  print(n-1);
 }
 return;
}
void main()
{
 int num;
 clrscr();
 printf("\nEnter number from which you want to print upto 1 ");
 scanf("%d",&num);
 print(num);
 getch();
 return;
}