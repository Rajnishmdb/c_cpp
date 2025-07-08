#include<iostream.h>
#include<conio.h>
class item
{
   int num1,num2;
  public:
   item(int a, int b);
   item(item &x);
   void displaydata();
};
int main()
{
   item I1(5,6),I2(10,20);
   item I3(I1);
   item I4(I2),I5(I3);
   clrscr();
   I1.displaydata();
   I2.displaydata();
   I3.displaydata();
   I4.displaydata();
   I5.displaydata();
   getch();
   return 0;
}
item :: item(int a, int b)
{
   num1 = a;
   num2 = b;
}
item :: item(item &x )
{
   num1 = x.num1;
   num2 = x.num2;
}
void item :: displaydata()
{
   cout<<"\nnum1 = "<<num1<<"  num2 = "<<num2<<"\n";
}

