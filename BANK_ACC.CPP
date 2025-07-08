#include<iostream.h>
#include<conio.h>
class bank_account
{
   int ac_n;
   int bal;
  public:
   void getdata(void);
   void deposit(int);
   void withdraw(int);
   void display(void);
};
int main()
{
   bank_account B1;
   clrscr();
   B1.deposit(100);
   B1.withdraw(99);
   B1.display();
   getch();
   return 0;
}
void bank_account :: deposit(int a)
{
   int total;
   getdata();
   total = bal + a;
}
void bank_account :: withdraw(int b)
{
   int t_a;
   deposit(int);
   t_a = t_b - b;
}
void bank_account :: display(void)
{
   cout<<"ACCOUNT NUMBER: "<< ac_n<<"\n";
   cout<<"MAIN BALANCE: "<< bal <<"\n";
   cout<<"After deposit"<<"\n";
   cout<<"TOTAL BALANCE: "<<t_b<<"\n";
   cout<<"After withdraw"<<<"\n";
   cout<<"TOTAL BALANCE: "<<t_a<<"\n";
}


