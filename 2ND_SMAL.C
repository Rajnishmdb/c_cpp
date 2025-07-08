#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,a[5]={5,6,2,7,1};
  int small,small2;
  small=a[0];
  small2=a[0];
  clrscr();
  for(i=0;i<=4;i++)
  {
    if(small>a[i])
    {
       small=a[i];
    }
    for(j=1;j<=4;j++)
    {
       if(small2>a[j] && small2<small)
	small2=a[j];
    }
  }
  printf("smallest = %d",small2);
  getch();
  return 0;
}