/*Average of two number in cpp*/
#include<iostream.h>
#include<conio.h>
int main()
{
  float num1,num2,sum,avrg;
  clrscr();
  cout << "Enter two numbers : ";
  cin >> num1;
  cin >> num2;
  sum = num1 + num2;
  avrg = sum / 2;
  cout << "sum = "<< sum <<"\n";
  cout << "avrg = "<< avrg <<"\n";
  getch();
  return 0;
}