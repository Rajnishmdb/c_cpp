#include<iostream.h>
#include<conio.h>
class G_father
{
   public:
    void charecter()
    {
	cout<<"\tGood behaviour"<<"\n";
    }
};
class father : public G_father
{
   public:
    void intelligens()
    {
       charecter();
       cout<<"\tSharp Bran"<<"\n";
    }
};
class uncle : public G_father
{
   public:
    void size()
    {
      cout<<"\tFat in Size"<<"\n";
    }
};
class son : public father , public uncle
{
   public:
    void height()
    {
      cout<<"\tTaller in Height"<<"\n";
    }
    void display()
    {
      cout<<"Personality of Son :"<<"\n\n";
      intelligens();
      height();
    }
};
int main()
{
   son s1;
   clrscr();
   s1.display();
   getch();
   return 0;
}

