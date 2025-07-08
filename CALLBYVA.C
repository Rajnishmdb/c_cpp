#include<stdio.h>
#include<conio.h>
void swap (int,int);
int main()
{
  int a,b;
  printf("Enter the  two number a and b: ");
  scanf("%d%d",&a,&b);
  printf("\na=%d,b=%d",a,b);
  swap(a,b);
  printf("\na=%d,b=%d",a,b);
  return 0;
}
void swap (int a,int b)
{
 int temp;
 temp = a;
 a = b;
 b = temp;
 printf("\n swaped number a=%d and b=%d",a,b);
 getch();
}