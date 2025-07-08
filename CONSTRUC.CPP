#include<iostream.h>
#include<conio.h>
class item
{
   int num1,num2;
  public:
   int x;
   item (int a, int b);
   void displaydata();
   void swapdata();
   void sumdata();
   void printdata();
};
int main()
{
   item I1(5,6),I2(10,20);
   clrscr();
   I1.displaydata();
   I1.swapdata();
   I1.sumdata();
   I1.printdata();
   I2.displaydata();
   I2.swapdata();
   I2.sumdata();
   I2.printdata();
   getch();
   return 0;
}
item :: item(int a,int b)
{
   num1 = a;
   num2 = b;
}
void item :: displaydata()
{
   cout<<"\nnum1 = "<<num1<<"\nnum2 = "<<num2<<"\n";
}
void item :: swapdata()
{
   int temp;
   temp = num1;
   num1 = num2;
   num2 = temp;
}
void item :: sumdata()
{
  // int x;
   x = num1 + num2;
}
void item :: printdata()
{
   cout<<"After swaping \n";
   cout<<"num1= "<<num1<<"\nnum2= "<<num2<<"\nsum= "<<x<<endl;
}

