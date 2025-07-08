#include<iostream.h>
#include<conio.h>
class A
{
   int num1;
   int num2;
  protected:
   int mul;
  public:
   void getdata();
   void muldata();
   virtual void display()=0;
};
class B : public A
{
  public:
   virtual void display();
};
int main()
{
  A *a;
  B b;
  clrscr();
  b.getdata();
  a = &b;
  a -> display();
  getch();
  return 0;
}
void A :: getdata()
{
   cout<<"Enter two values"<<"\n";
   cout<<"num1 = ";
   cin>>num1;
   cout<<"num2 = ";
   cin>>num2;
}
void A :: muldata()
{
   mul = num1 * num2;
}
void A :: display()
{
   cout<<"num1 = "<<num1<<"\tnum2 = "<<num2<<"\n";
}
void B :: display()
{
   muldata();
   cout<<"Multiplication of given number : "<<mul<<"\n";
}
