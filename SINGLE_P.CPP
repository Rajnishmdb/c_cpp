#include<iostream.h>
#include<conio.h>
class B
{
   int bal;
  protected:
   int a_n;
  public:
   int dep;
   void getdata();
   int get_bal();
   void showdata();
};
class D : private B
{
   int c;
  public:
   void check_bal();
   void display();
};
int main()
{
   D d1,d2;
   clrscr();
   d1.check_bal();
   d1.display();
   d2.check_bal();
   d2.display();
   getch();
   return 0;
}
void B :: getdata()
{
   bal = 0;
   cout<<"\nEnter your account number: ";
   cin>>a_n;
   cout<<"Enter the deposit amount: ";
   cin>>dep;
}
int B :: get_bal()
{
   return(bal);
}
void D :: check_bal()
{
   getdata();
   c = get_bal() + dep;
}
void B :: showdata()
{
   cout<<"\nACCOUNT NUMBER : "<<a_n<<"\nDeposite : "<<dep<<endl;
}
void D :: display()
{
   showdata();
   cout<<"Balance : "<<c<<"\n";
}
