#include<stdio.h>
#include<conio.h>
int main()
{
     int num,temp;
     int count=0;
     clrscr();
     printf("Enter the number : ");
     scanf("%d",&num);
     temp = num;
     while(num != 0)
     {
	 num = num / 10;
	 count++;
     }
     printf("%d digits in Number %d.",count,temp);
     getch();
     return 0;
}
