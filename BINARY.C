#include<stdio.h>
#include<conio.h>
int main()
{
  int n,temp,temp1,count;
  long int b;
  printf("Enter the value of n:  ");
  scanf("%d",&n);
  count = 1;
  b = 1;
  clrscr();
  temp=n;
  while(temp != 1)
  {
     temp1 = temp % 2;
     b = b +temp1* 10;
     temp = temp /2;
     count = count * 10;
  }
  printf("%d",b);
  getch();
  return 0;
}