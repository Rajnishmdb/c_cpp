#include<iostream.h>
#include<conio.h>
class X
{
   int num1;
   protected:
   int num2;
  public:
   void getdata();
   int setdata();
   void printdata();
};
class Y : public X
{
   int num3;
  public:
    void sumdata();
    void display();
};
int main()
{
   Y T1,T2;
   clrscr();
   T1.getdata();
   T1.setdata();
   T1.printdata();
   T1.sumdata();
   T1.display();
   T2.getdata();
   T2.setdata();
   T2.printdata();
   T2.sumdata();
   T2.display();
   getch();
   return 0;
}
void X :: getdata()
{
   cout<<"Enter the value of num1: "<<endl;
   cin>>num1;
   cout<<"num2: "<<endl;
   cin>>num2;
}
int X :: setdata()
{
   return(num1);
}
void X :: printdata()
{
   cout<<"num1 = "<<num1<<"\nnum2 = "<<num2<<"\n";
}
void Y :: sumdata()
{
   num3 = setdata() + num2;
}
void Y :: display()
{
   cout<<"sum = "<<num3<<"\n\n";
}




