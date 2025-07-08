#include<iostream.h>
#include<conio.h>
int main()
{
   int per;
   clrscr();
   cout<<"Enter your percentage: ";
   cin>>per;
   if(per>=40)
   {
     goto read;
   }
   else
   {
     cout<<"You are not selected in exam";
   }
   read:
       cout<<"Congratulation you are selected in the exam";
   getch();
   return 0;
}


