#include<stdio.h>
#include<conio.h>
int main()
{
   int salary,bonus;
   char gender;
   clrscr();
   printf("Enter your gender and salary: ");
   scanf("%s%d",&gender,&salary);
   if(gender == male)
   {
     if(salary>10000)
     {
       bonus=1000;
       printf("Salary= %d and bonus=%d",salary,bonus);
     }
     else
     {
	if(salary>5000)
	{
	   bonus = 500;
	   printf("Salary = %d and bonus = %d",salary,bonus);
	}
	else
	{
	   bonus = 250;
	   printf("Salary = %d and bonus=%d",salary,bonus);
	}
     }
   }
   else
   {
      if(salary>10000)
      {
	bonus = 100;
	printf("salary = %d and bonus = %d",salary,bonus);
      }
      else
      {
	if(salary>5000)
	{
	  bonus = 0;
	  printf("Salary = %d and bonus=%d",salary,bonus);
	}
	else
	{
	   bonus = 10;
	   printf("Salary = %d and bonus=%d",salary,bonus);
	}
      }
   }
   getch();
   return 0;
}




