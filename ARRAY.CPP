			/*Sum and average of arrray in cpp*/
#include<iostream.h>
#include<conio.h>
int main()
{
   int i,a[3],sum;
   float avg;
   sum = 0;
   clrscr();
   for(i = 0;i <= 2; i++)
   {
     cout<<"Enter the element of array: "<<i+1;
     cin>>a[i];
   }
   for(i = 0;i <= 2; i++)
   {
     sum = sum + a[i];
   }
   avg = sum/3;
   cout<<"sum = "<<sum<<"\n";
   cout<<"average = "<<avg<<"\n";
   getch();
   return 0;
}

