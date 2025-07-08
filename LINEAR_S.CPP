#include<iostream.h>
#include<conio.h>
int main()
{
   int a[10] = {12,13,14,15,16,17,18,19,20,21};
   int num,i,pos=0;
   clrscr();
   cout<<"Enter the number you want to search the position: "<<"\n";
   cin>>num;
   for(i=0;i<10;i++)
   {
     if(a[i] == num)
     {
	pos = i+1;
	break;
     }
   }
   if(pos!= 0)
     cout<<"Number "<<num<<" is found at "<<pos<<" position"<<"\n";
   else
     cout<<"Number is not found"<<"\n";
   getch();
   return 0;
}