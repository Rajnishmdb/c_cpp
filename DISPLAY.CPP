/*Calculation of a/(b-c)*/
#include<iostream.h>
#include<conio.h>
int main()
{

  float a,b,c,x;
  clrscr();
  cout << "Enter the value of a: ";
  cin >> a;
  cout << "Enter the value of b: ";
  cin >> b;
  cout << "Enter the value of c: ";
  cin >> c;
  x = a / (b - c);
  if((b-c)!=0)
  {
    cout << "The value of x is " << x <<"\n";
  }
  else
  {
    cout << "The value of x is infinity" << "\n";
  }
  getch();
  return 0;
}

