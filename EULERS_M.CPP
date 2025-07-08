#include<iostream.h>
#include<conio.h>
#include<math.h>
#define f(x,y) -x*y
int main()
{
  float a,b,x,y,t,k,h;
  clrscr();
  cout<<"Enter the value of x0.y0,h and xn: "<<"\n";
  cin>>a;
  cin>>b;
  cin>>h;
  cin>>t;
  x = a;
  y = b;
  while(x < t)
  {
       k = h * f(x,y);
       y = y+k;
       x = x+h;
       cout<<"x = "<<x<<"\ty = "<<y<<"\n";
  }
  getch();
  return 0;
}