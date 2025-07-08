#include<stdio.h>
#include<conio.h>
int main()
{
  int n,hp,t1;
  int i;
  printf("Enter the number of terms:  ");
  scanf("%d",&n);
  t1 = 0;
  for(i=0;i<=n;i++)
  {
     hp =t1 + 1 / i+1;

  }
  printf(" HP = %d",hp);
  getch();
  return 0;
}