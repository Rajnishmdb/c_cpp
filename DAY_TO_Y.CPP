#include<iostream.h>
#include<conio.h>
int main()
{
  int day,m1,m2,m3,y;
  clrscr();
  cout<<"Enter the number of days:  ";
  cin>>day;
  y=day/365;
  m1=day%365;
  m2=m1/30;
  m3=m1%30;
  cout<<"Year=  "<<y<<"\n";
  cout<<"Month=  "<<m2<<"\n";
  cout<<"Day=  "<<m3;
  getch();
  return 0;
}