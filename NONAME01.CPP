#include<stdio.h>
#include<conio.h>
#define Max_size 5
int main()
{
 int a[Max_size];
 int i,j;
 clrscr();
 for(i=1; i <=Max_size; ++i)
 {
  printf("\n Enter the %d element of array ",i);
  scanf("%d",&a[i]);
  }
 clrscr();
 printf("\n You entered element : ");
 for(i=1; i <=Max_size; ++i)
 {
  printf(" %5d ",a[i]);
 }
 for(i=1; i <= Max_size; ++i)
 {
  if( a[0] < a[i])
    a[0] = a[i];
  }
 printf("\n The largest element of array is %d",a[0]);
 for(j=1; j <= Max_size; ++j)
 {
  if( a[0] > a[j])
    a[0] = a[j];
  }
 printf("\n The smallest element of array is %d",a[0]);
 getch();
 return 0;
 }