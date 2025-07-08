#include<iostream.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x - 2*x - 5
#define df(x) 3*x*x - 2
void main()
{
   float x0,x1,f1,f0,df0,df1;
   int i=0;
   clrscr();
   cout<<"enter the value of x0:  "<<"\n";
   cin>>x0;
   do
   {
      f0=f(x0);
      df0=df(x0);
      x1 = x0 - (f0/df0);
      f1 = f(x1);
      df1 =df(x1);
      x0=x1;
      f0 = f1;
      df0 = df1;
      i++;
      cout<<"\nno of iteration= "<<i;
      cout<<"\troot = "<<x1;
   }while(fabs(f1)>e);
   getch();
 }