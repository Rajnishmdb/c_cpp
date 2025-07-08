#include<iostream.h>
#include<conio.h>
#include<math.h>
int sum(int a,int b,int c)
{
  cout<<" Enter a and b ";
  cin>>a;
  cin>>b;
  c = a + b;
  cout<<" Adding numbers "<<a<<"\t"<<b<<"\n";
  cout<<" sum =  "<<c;
  return 0;
}
int sub()
{
  int a,b,c;
  cout<<"Enter a and b ";
  cin>>a;
  cin>>b;
  cout<<" Substracting numbers  "<<a<<"\t"<<b<<"\n";
  c = a-b;
  cout<<" sub = "<<c<<"\n";
  return 0;
}
int mul()
{
  int a,b,c;
  cout<<" Enter a and b ";
  cin>>a;
  cin>>b;
  cout<<"Multiplying numbers "<<a<<"\t"<<b<<"\n";
  c = a*b;
  cout<<" mul =  "<<c<<"\n";
  return 0;
}
int div()
{
  int a,b,c;
  cout<<" Enter a and b ";
  cin>>a;
  cin>>b;
  cout<<" Dividing numbers "<<a<<"\t"<<b<<"\n";
  c = a % b;
  cout<<" div =  "<<c;
  return 0;
}
int display_choice()
{
  int choice;
  clrscr();
  cout<<"\n------MENU FOR  IMPLEMENTATION-----";
  cout<<"\n1:Add these number";
  cout<<"\n2:Sub these number:";
  cout<<"\n3:Mul these number:";
  cout<<"\n4:Div these number:";
  cout<<"\n0:Exit";
  cout<<"\n-----------------------------------------";
  cout<<"\n Enter your choice ";
  cin>>choice;
  getch();
  return choice;
}
int main()
{
  int a,b,c,choice;
  clrscr();
  while((choice= display_choice()) != 0)
  {
    switch(choice)
    {
       case 1:sum(a,b,c);
	  cout<<"\n Press a key to continue";
	  getch();
	  break;

       case 2:sub();
	  cout<<"\n Press a key to continue";
	  getch();
	  break;

       case 3:mul();
	  cout<<"\n Press a key to continue";
	  getch();
	  break;
       case 4:div();
	  cout<<"\n Press a key to continue";
	  getch();
	  break;

       default :cout<<"\n Invalid choice try again";
	 cout<<"\n Press a key to continue";
	 getch();
	 break;
       }
      }
  getch();
  return 0;
}


