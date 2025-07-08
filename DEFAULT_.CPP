#include<iostream.h>
#include<conio.h>
#include<math.h>
int power(double m,int n=2);
void power(int g,int h);
int main()
{
   int p,b,q;
   double a;
   clrscr();
   cout<<"Enter the value of m: ";
   cin>>a;
   cout<<"Enter the power of m: ";
   cin>>b;
   power(a,b);
   power(a);
   power(a,b);
   getch();
   return 0;
}
int power(double x,int y)
{
   int z;
   z = pow(x,y);
   cout<<"RESULT = "<<z<<endl;
   return(z);
}
void power(int u,int v)
{
   int w;
   w = pow(u,v);
   cout<<"RESULT = "<<w<<endl;
}


