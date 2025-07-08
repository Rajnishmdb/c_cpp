#include<stdio.h>
#include<conio.h>
int main()
{
 int num1,num2;
 int Sum,Sub,Mult,Div;
 clrscr();
 printf("Enter the numbers num1 and num2 ; ");
 scanf("%d%d",&num1,&num2);
 Sum = num1+num2;
 printf("\n Sum = %d",Sum);
 Sub = num1-num2;
 printf("\n Sub = %d",Sub);
 Mult = num1*num2;
 printf("\n Mult = %d",Mult);
 Div = num1/num2;
 printf("\n Div = %d",Div);
 getch();
 return 0;
}