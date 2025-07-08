#include<stdio.h>
#include<conio.h>
int  fab(int n)
{

  if(n==0)
    return 0;
  else
  {
    if(n==1)
      return 1;
    else
     return( fab(n-1) + fab(n-2));
  }
}
int main()
{
  int y,i,t;
  clrscr();
  printf("How many numbers you want to print in fabonacci series: ");
  scanf("%d",&t);
  printf("\n Fabonacci Series:\n\t ");
  textcolor(2);
  for(i=0;i<t;i++)
  {
     cprintf("%10d",fab(i));
  }
  getch();
  return 0;
}