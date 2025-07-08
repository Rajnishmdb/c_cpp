#include<iostream.h>
#include<conio.h>
class B;
class A
{
   int num1;
  public:
   void setdata(int a)
   {
     num1 = a;
   }
   friend void mul(A,B);
};
class B
{
   int num2;
  public:
   void setdata(int b)
   {
     num2 = b;
   }
   friend void mul(A,B);
};
int main()
{
   A x;
   B y;
   clrscr();
   x.setdata(45);
   y.setdata(45);
   mul(x,y);
   getch();
   return 0;
}
void mul(A obj1,B obj2)
{
   cout<<"Multiplication of data values of class A and class B = "<<obj1.num1 * obj2.num2<<"\n";
}