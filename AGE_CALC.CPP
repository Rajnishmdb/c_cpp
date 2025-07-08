#include<iostream.h>
#include<conio.h>
class age
{
   int y;
   int m;
   int d;
  public:
   void setdata(int a,int b,int c)
   {
     y = a;
     m = b;
     d = c;
   }
   age operator-(age a1);
   void display()
   {
     cout<<"AGE :\n"<<"\tYEAR :"<<y<<"  MONTH : "<<m<<"  DAY : "<<d<<"\n";
   }
};
int main()
{
  age A1,A2,A3;
  clrscr();
  A1.setdata(2019,1,13);
  A2.setdata(1999,3,14);
  A3 = A1 - A2;
  A3.display();
  getch();
  return 0;
}
age age :: operator-(age a1)
{
     age temp;
    if(d<a1.d)
    {
     temp.d =(30+d)-a1.d;
     //temp.m=m-a1.m;
     if(m<a1.m)
     {
      temp.m = (12+(m-1))-a1.m;
      temp.y=(y-1)-a1.y;
     }
     else
     {
      temp.m = (m-1)-a1.m;
     temp.y=y-a1.y;
     }
    }
    else
    {
     temp.d=d-a1.d;
     if(m<a1.m)
     {
      temp.m=(12+m)-a1.m;
      temp.y=(y-1)-a1.y;
     }
     else
     {
      temp.m=m-a1.m;
     temp.y=y-a1.m;
     }
    }
    //temp.y = y-a1.y;
    return(temp);
}

