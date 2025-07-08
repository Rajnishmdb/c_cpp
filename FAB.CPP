#include<iostream.h>
#include<conio.h>
int  fab(int n)
{

  if(n==0)
    return 0;
  else
  {
    if(n==1)
      return 1;
    else
     return( fab(n-1) + fab(n-2));
  }
}
int main()
{
  int y,i,t;
  clrscr();
  cout<<"How many numbers you want to print in fabonacci series: ";
  cin>>t;
  cout<<"\n Fabonacci Series:\n\t ";
  textcolor(6);
  for(i=0;i<t;i++)
  {
     cprintf("%10d",fab(i));
  }
  getch();
  return 0;
}