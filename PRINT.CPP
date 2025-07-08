#include<iostream.h>
#include<conio.h>
int main()
{
   int i,j;
   i=0;
   clrscr();
   for(i=1;i<=5;i++)
   {
     for(j=1;j<=i;j++)
     {
       cout<<"*\t";
     }
     cout<<"\n";
   }
   getch();
   return 0;
}