#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,x;
  printf("\nEnter the inputs for AND gate : ");
  scanf("%d%d",&a,&b);
  if(a==0 || b==0)
  {
    printf("output = 0",x);
  }
  else
  {
    printf("outut = 1",x);
  }
  getch();
  return 0;
}