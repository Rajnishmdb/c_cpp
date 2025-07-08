#include<stdio.h>
#include<conio.h>
int main()
{
 int i,a[20],n,temp,j;
 printf("\nEnter the size of array");
 scanf("%d",&n);
 printf("\nEnter the value in array \n");
 for(i=0;i<n;i++)
 {
  printf("\nElement(%d) =  ",i+1);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
    if(a[j]>a[j+1] && j+1< n-i)
    {
    temp =a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
    }
   }
 }
 printf("\n Sorted array :-\n\t");
 for(i=0;i<n;i++)
 {
  printf("  %d",a[i]);
 }
 printf("\n\t Shortest = %d",a[0]);
 printf("\n\t Greatest = %d",a[n-1]);
 getch();
 return 0;
}