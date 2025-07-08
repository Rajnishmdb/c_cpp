#include<iostream.h>
#include<conio.h>
int D_choice();
class bank_account
{
   int A_n;
   int bal;
  public:
   bank_account(int a,int b)
   {
     A_n = a;
     bal = b;
   }
   void deposit();
   void withdraw();
   void display();
};
int main()
{
   bank_account B1(10098,0);
   int choice;
   while((choice = D_choice()) != 0)
   {
     switch(choice)
     {
       case 1:
	    B1. deposit();
	    cout<<"\n Press a key to continue: ";
	    getch();
	    break;
       case 2:
	    B1.withdraw();
	    cout<<"\n Press a key to continue: ";
	    getch();
	    break;
       case 3:
	    B1.display();
	    cout<<"\n Press a key to continue: ";
	    getch();
	    break;
       default:
	    cout<<"\n Invalid choice try again";
	    cout<<"\n Press a key to continue: ";
	    getch();
	    break;
     }
   }
   getch();
   return 0;
}
int D_choice()
{
   int choice;
   clrscr();
   cout<<"\n-------MANU FOR IMPLIMENTATION--------";
   cout<<"\n1: Deposit";
   cout<<"\n2: Withdraw";
   cout<<"\n3: Display";
   cout<<"\n0: Exit";
   cout<<"\n-------------------------------------";
   cout<<"\nEnter your choice: ";
   cin>>choice;
   return choice;
}
/*void bank_account :: getdata()
{
   cout<<"Enter your account number: ";
   cin>>A_n;
   bal = 0;
}*/
void bank_account :: deposit()
{
   int dep;
   //getdata();
   cout<<"\nEnter the amount which you want to deposit: ";
   cin>>dep;
   bal = dep;
}
void bank_account :: withdraw()
{
   int wd;
   if(bal == 0)
   {
     cout<<"\nYou have zero amount in your account";
   }
   else
   {
     cout<<"\nEnter the amount which you want to withdraw: ";
     cin>>wd;
   }
   bal = bal - wd;
}
void bank_account :: display()
{
   cout<<"\nAccount Number: "<<A_n<<"\nBalance: "<<bal;
}





