#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,k,count;
 int a[5];
 clrscr();
 count = 0;
 printf("\n Enter the numbers: ");
 for(i=0;i<=4;++i)
 {
  printf("\nEnter the %d array element: ",i+1);
  scanf("%d",a[i]);
 }
 for(i=0;i<5;++i)
 {
  if((a[i] % 2) == 0)
  {
   count = count +1;
   printf("\nThere are %d even numbers",count);
   }
  }
getch();
return 0;
}
