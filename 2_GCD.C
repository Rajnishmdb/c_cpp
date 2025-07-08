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
   return(num1);
}
int main()
{
   int n,i,a[50];
   clrscr();

   printf("Enter the number of integer: ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      printf("integer(%d) = ",i+1);
      scanf("%d",a[n]);
   }
   for(i=0;i<n;i++)
   {
      a[i+1] = gcd(a[i],a[i+1]);
      printf("gcd = %d",a[i+1]);
   }
   getch();
   return 0;
}

