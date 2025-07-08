# include<stdio.h>
#include<conio.h>
int main()
{
 int age;
 clrscr();
 printf("\nEnter your age: ");
 scanf("%d",&age);
 if(age>12 && age<20)
 printf("\n you are a teen age person");
 else
 printf("\nyou are not a teen age person");
 getch();
 return 0;
}

