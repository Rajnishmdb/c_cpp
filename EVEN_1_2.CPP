#include<iostream.h>
#include<conio.h>
int main()
{
  int i;
  clrscr();
  cout<<"Even Numbers: "<<"\n";
  for(i=1;i<=20;i++)
  {
    if(i%2==0)
       cout<<i<<"\t";
  }
  getch();
  return 0;
}