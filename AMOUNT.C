#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
 int p,a,y=1;
 clrscr();
 printf("\n Enter the principle amount");
 scanf("%d",&p);
 a=p;
 printf(" Year \tPrinciple Amount  \t Amount at end of year");
 while(y != 6)
 {
  a= a + (a /20);
  printf("\n %d \t%d \t\t\t\t%d",y,p,a);
  p= a;
  y++;
 }
 getch();
 return 0;
}
