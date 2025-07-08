#include<stdio.h>
#include<conio.h>
void print(int n)
{
 if(n>0)
 {
  print(n-1);
  printf("\n%d",n);
 }
 return;
}
void main()
{
 int num;
 clrscr();
 printf("\nEnter num upto which you want to print ");
 scanf("%d",&num);
 print(num);
 getch();
 return;
}