#include<iostream.h>
#include<conio.h>
class Grand_p
{
   public:
    void behavior()
    {
      cout<<"\tGood Behavior"<<"\n";
    }
};
class Parent : public Grand_p
{
   public:
    void height()
    {
      cout<<"\tTaller in height"<<"\n";
    }
};
class child : public Parent
{
   public:
    void body()
    {
      cout<<"\tFat"<<"\n\n";
    }
    void display()
    {
      cout<<"\nPersonality of Child: "<<"\n";
    }
};
int main()
{
   child c1;
   clrscr();
   c1.display();
   c1.behavior();
   c1.height();
   c1.body();
   getch();
   return 0;
}





