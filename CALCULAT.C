# include <stdio.h>
# include <conio.h>
# include <math.h>
int sum(int a,int b,int c)
{
 printf("\n Enter a and b");
 scanf("%d%d",&a,&b);
 clrscr();
 c = a + b;
 printf("\n Adding numbers %d and %d ",a,b);
 printf("\n sum =%d",c);
 return 0;
}
int sub()
{
 int a,b,c;
 printf("\n Enter a and b");
 scanf("%d%d",&a,&b);
 clrscr();
 printf("\n Adding numbers %d and %d ",a,b);
 c = a-b;
 printf("\n sub =%d",c);
 return 0;
}
int mul()
{
 int a,b,c;
 printf("\n Enter a and b");
 scanf("%d%d",&a,&b);
 clrscr();
 printf("\n Adding numbers %d and %d ",a,b);
 c = a*b;
 printf("\n mul =%d",c);
 return 0;
}
int div()
{
 int a,b,c;

 clrscr();
 printf("\n Enter a and b");
 scanf("%d%d",&a,&b);
 printf("\n Adding numbers %d and %d ",a,b);
 c = a % b;
 printf("\n div =%d",c);
 return 0;
}
int display_choice()
{
int choice;
clrscr();
printf("\n------MENU FOR  IMPLEMENTATION-----");
printf("\n1:Add these number");
printf("\n2:Sub these number:");
printf("\n3:Mul these number:");
printf("\n4:Div these number:");
printf("\n0:Exit");
printf("\n-----------------------------------------");
printf("\n Enter your choice ");
scanf("%d",&choice);
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
       printf("\n Press a key to continue");
       getch();
       break;

case 2:sub();
       printf("\n Press a key to continue");
       getch();
       break;

case 3:mul();
       printf("\n Press a key to continue");
       getch();
       break;
case 4:div();
       printf("\n Press a key to continue");
       getch();
       break;

default :printf("\n Invalid choice try again");
	 printf("\n Press a key to continue");
	 getch();
	 break;
       }
      }
getch();
return 0;
}

