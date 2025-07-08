#include<iostream.h>
#include<conio.h>
class complex
{
   int x;
   int y;
  public:
   void setdata(int a,int b)
   {
     x = a;
     y = b;
   }
   complex operator+(complex c);
   void display()
   {
     cout<<x<<"+i"<<y<<"\n";
   }
};
complex complex :: operator+(complex c)
{
   complex temp;
   temp.x = x + c.x;
   temp.y = y + c.y;
   return(temp);
}
int main()
{
  complex c1,c2,c3
  c1.setdata(5,10);
  c2.setdata(5,15);
  c3 = c1+c2;
  c3.display();
  getch();
  return 0;
}