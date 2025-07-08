#include<stdio.h>
#include<conio.h>
int main()
{
 int fact,num;
 clrscr();
 printf("\n Enter number to find factoril ");
 scanf("%d",&num);
 fact = 1;
 while(num != 1)
 {
  fact = fact * num;
  num = num -1;
 }
printf("factorial = %d",fact);
getch();
return 0;
}