#include<iostream.h>
#include<conio.h>
int main()
{
  int i,j,sum;
  float avg;
  int a[10];
  sum = 0;
  for(i=0;i<=9;i++)
  {
   cout<<"Enter the %d element of array : ";
   cin>>a[i];
  }
  for(i=0;i<=9;i++)
  {
    sum = sum + a[i];
  }
  avg = sum / 10;
  cout<<" Average = "<<avg<<"\n";
  getch();
  return 0;
}