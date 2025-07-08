#include<iostream.h>
#include<conio.h>
int main()
{
  int i,j,n;
  clrscr();
  cout<<"n=";
  cin>>n;
  i=1;
  j=1;
  do
  {
    cout<<i<<"\t";
    i++;
    j++;
  }while(j<=n);
  getch();
  return 0;
}