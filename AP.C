#include<stdio.h>
#include<conio.h>
int main()
{
  int a,an,n,d,i;
  clrscr();
  printf("\n enter the a,n,d:  ");
  scanf("%d%d%d",&a,&n,&d);
  printf("AP: \n %d",a);
  an = a;
  for(i=1;i<n;++i)
  {
    an = an + d;
    printf("\n %d",an);
  }
  getch();
  return 0;
}