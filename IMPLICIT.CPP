#include<iostream.h>
#include<conio.h>
int main()
{
   int x,sum,p;
   char y = 'a';
   float z,n;
   clrscr();
   x = 10;
   cout<<"Before conversion"<<"\t x = "<<x<<"\n";
   n = 1.2;
   /*Implicit type conversion*/
   x = x + y;
   z = x + y;
   p = 'a';
   /*Explicit type converion*/
   sum = (int)n + 1;
   cout<<"After conversion"<<"\t x = "<<x<<endl;
   cout<<" n = "<<n<<"\n p = "<<p<<endl;
   cout<<" z = "<<z<<"\n sum = "<<sum;
   getch();
   return 0;
}

