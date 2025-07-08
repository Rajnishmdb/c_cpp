#include<stdio.h>
#include<conio.h>
int main()
{
     int num,r,sum=0,temp;
     clrscr();
     printf("Enter the number : ");
     scanf("%d",&num);
     temp = num;
     while(temp > 0)
     {
	  r = temp % 10;
	  sum = sum +(r*r*r);
	  temp = temp / 10;
     }
     if(sum == num)
	  printf("Yes,%d is an Armstrong Number.",num);
     else
	  printf("%d is not Armstrong number.",num);
     getch();
     return 0;
}