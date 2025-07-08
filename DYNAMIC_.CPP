#include<iostream.h>
#include<conio.h>
int main()
{
   int n = 5,i,sum = 0;
   int *q = new int[n];
   float avg;
   clrscr();
   if(!q)
   {
      cout<<"memory not allocated\n";
   }
   else
   {
      for(i=0;i<n;i++)
      {
	q[i] = i + 1;
      }
      cout<<"\nvalue store in block \n";
      for(i=0;i<n;i++)
      {
	cout<<"\t"<<q[i]<<"\t";
      }
      for(i=0;i<n;i++)
      {
	sum = sum +q[i];
      }
      avg = sum / 5;
      cout<<"\n\nAverage : "<<avg;
   }
   delete[]q;
   getch();
   return 0;
}