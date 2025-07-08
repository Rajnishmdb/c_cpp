#include<stdio.h>
#include<conio.h>
void main()
{
int num1,num2,num3,num4,num5,sum;
clrscr();
printf("\n enter the five number");
scanf("%d%d%d%d%d%",&num1,&num2,&num3,&num4,&num5);
sum = num1 + num2 + num3 + num4 + num5;
printf("Sum of these number is %d",sum);
getch();
return;
}