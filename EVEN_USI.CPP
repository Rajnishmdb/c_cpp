#include<iostream.h>
#include<conio.h>
int main()
{
  int i,n;
  clrscr();
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"EVEN NUMBERS:"<<"\n";
  for(i=1;i<=2*n;i++)
  {
      if(i%2==0)
      {
	cout<<i<<"\t";
      }
  }
  getch();
  return 0;
}

