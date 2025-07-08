		      /*Fabnico series in cpp*/
#include<iostream.h>
#include<conio.h>
void main()
{
 int limit,a,b,c,i;
 clrscr();
 cout<<"enter the limit: "<<"\n";
 cin>>limit;
 clrscr();
 a=0;
 b=1;
 cout<<"\n\n\n\nfabinicco series : ";
 cout<<"\t"<<a;
 cout<<"\t"<<b;
 for(i=0;i<limit-2;i++)
 {
  c = a + b;
  cout<<"\t"<<c;
  a = b;
  b = c;
 }
 getch();
}
