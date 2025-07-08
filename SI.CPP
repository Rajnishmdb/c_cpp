#include<iostream.h>
#include<conio.h>
int main()
{
  int p, r,t,si;
  clrscr();
  cout<<"Enter the principal,rate and time of simple intreste:   ";
  cin>>p;
  cin>>r;
  cin>>t;
  si = p * t * r / 100;
  cout<<"Simple Intreste =  "<<si<<"\n";
  getch();
  return 0;
}
