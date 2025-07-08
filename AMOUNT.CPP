#include<iostream.h>
#include<conio.h>
int main()
{
 int p,a,y=1;
 clrscr();
 cout<<" Enter the principle amount";
 cin>>p;
 a=p;
 cout<<" Year "<<"\t  "<<"Principle Amount  "<<"\t"<< "Amount at end of year";
 while(y != y)
 {
  a= a + (a /20);
  cout<<"\n  "<<y;
  cout<<"\t\t"<<p;
  cout<<"\t\t\t "<<a;
  p= a;
  y++;
  cout<<"\n";
 }
 getch();
 return 0;
}
