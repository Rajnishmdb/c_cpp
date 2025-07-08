			/*Factorial in cpp*/
#include<iostream.h>
#include<conio.h>
int main()
{
 int num,i,fact;
 clrscr();
 cout<<"\nEnter the numder: ";
 cin>>num;
 fact = 1;
 while(num != 1)
 {
  fact = num * fact;
  num = num - 1;
  }
  cout<<"\n Fact = "<<fact;
  getch();
  return 0;
 }