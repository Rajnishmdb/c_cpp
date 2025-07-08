#include<iostream.h>
#include<conio.h>
const size = 3;
class student
{
   int de[size];
   int oops[size];
  public:
   student();
   void getdata();
//   student(int *x,int *y);
   student operator+(student s);
   void display()
   {
     cout<<de<<"\n"<<oops<<"\n";
   }
};
student :: student()
{
   for(int i=0;i<3;i++)
   {
     de[i] = 0;
     oops[i] = 0;
   }
}
void student :: getdata()
{
   for(int i=0;i<3;i++)
   {
     cout<<"DE num: "<<i+1<<" ";
     cin>>de[i];
     cout<<"OOPS num"<<i+1<<" ";
     cin>>oops[i];
   }
}

/*student :: student(int *x,int *y)
{
   for(int i=0;i<3;i++)
   {
      de[i] = x[i];
      oops[i] = y[i];
   }
} */
student student :: operator+(student s)
{
   student s1;
   for(int i=0;i<3;i++)
   {
     s1.de[i] = de[i] + s.de[i];
     s1.oops[i] = oops[i] + s.oops[i];
   }
   return(s1);
}
int main()
{
  student s2,s3,s4;
  clrscr();
  s2.getdata();
  //s3.getdata();
  //student s4(s2,s3);
  s4 = s3+s2;
  s4.display();
  getch();
  return 0;
}






