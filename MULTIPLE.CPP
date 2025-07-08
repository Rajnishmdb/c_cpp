#include<iostream.h>
#include<conio.h>
class A
{
  protected:
   int a;
  public:
   void get_a(int x)
   {
     a=x;
   }
};
class B
{
  protected:
   int b;
  public:
   void get_b(int y)
   {
     b=y;
   }
};
class C:public A,public B
{
  protected:
   int c;
  public:
   void sum()
   {
     c=a+b;
   }
   void display()
   {
     cout<<"a="<<a<<"\n";
     cout<<"b="<<b<<"\n";
     cout<<"sum="<<c<<"\n";
   }
};
int main()
{
  C c1;
  c1.get_a(3);
  c1.get_b(4);
  c1.sum();
  c1.display();
  getch();
  return 0;
}

