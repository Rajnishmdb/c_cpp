
#include<stdio.h>
#include<conio.h>
int main()
{
  int i,sum,a[10];
  float avg;
  sum = 0;
  for(i=0;i<=9;i++)
  {
   printf("Enter the %d element of array : ");
   scanf("%d",&a[i]);
  }
  for(i=0;i<=9;i++)
  {
    sum = sum + a[i];
  }
  avg = sum / 10;
  printf("average = %f",avg);
  getch();
  return 0;
}
