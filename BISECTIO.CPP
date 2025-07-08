#include<iostream.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 4*x + 1
void main()
{
  float x0,x1,x2;
  float f0,f1,f2;
  int i=0;
  clrscr();
  cout<<"enter the value of x0 and x1:  "<<"\n";
  cin>>x0;
  cin>>x1;
  do
  {
     f0=f(x0);
     x2=(x0+x1)/2;
     f2=f(x2);
     if(f0*f2<0)
     {
	x1=x2;
     }
     else
     {
       x0=x2;
     }
     i++;
     cout<<"no of iteration = "<<i;
     cout<<"root = "<<x2<<"\n";
  }while(fabs(f2)>e);
  getch();
}
