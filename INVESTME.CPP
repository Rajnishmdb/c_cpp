#include<iostream.h>
#include<conio.h>
#include<math.h>
int main()
{
  int p,r,n,v,v1;
  clrscr();
  cout<<"Enter the value of principal p:  ";
  cin>>p;
  cout<<"Enter the value of rate r:  ";
  cin>>r;
  cout<<"Enter the value of time n:  ";
  cin>>n;
  v = pow((1+r),n);
  v1 = p*v;
  cout<<"v = "<<v1<<"\n";
  getch();
  return 0;
}

