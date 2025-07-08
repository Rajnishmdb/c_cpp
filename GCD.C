#include<stdio.h>
#include<conio.h>
int gcd(int num1,int num2)
{
 while(num1!=num2)
   {
     if(num1>num2)
     {
       num1=num1-num2;
     }
     else
     {
       num2 = num2 - num1;
     }
}
int main()
{
   int num1,num2,lcm,temp1,temp2;
   clrscr();

   printf("Enter the two number: ");
   scanf("%d%d",&num1,&num2);
   temp1 = num1;
   temp2 = num2;
   while(num1!=num2)
   {
     if(num1>num2)
     {
       num1=num1-num2;
     }
     else
     {
       num2 = num2 - num1;
     }
   }
   printf("GCD =%d ",num2);
   lcm =  temp1 * temp2 /num1;
   printf("LCM =%d ",lcm);
   getch();
   return 0;
}

