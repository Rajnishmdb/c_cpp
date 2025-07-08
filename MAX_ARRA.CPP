
#include<iostream.h>
#include<conio.h>
int main()
{
   int i,max,small;
   int a[5]={7,6,15,20,18};
   clrscr();
   cout<<"The element of array:" ;
   for(i=0;i <=4;i++)
   {
     cout<<"\n "<<i+1<<":-  "<<a[i]<<"\n";
   }
   max=a[0];
   for(i=0;i <=4;i++)
   {
     if(max<a[i])
	max=a[i];
   }
   cout<<"\nLargest value= "<<max;
   small = a[0];
   for(i=0;i <=4;i++)
   {
     if(small>a[i])
	small=a[i];
   }
   cout<<"\nLowest value= "<<small;

   getch();
   return 0;
}
