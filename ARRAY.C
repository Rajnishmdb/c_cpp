#include<stdio.h>
#include<conio.h>
void main()
{
 int i,a[10];
 int even=0;
 int odd=0;
 int neg=0;
 clrscr();
 printf("Enter the value in array \n");
 for(i=0;i<10;i++)
 scanf("%d",&a[i]);
 /*Calculating number of odd and even integer`s*/
 for(i=0;i<10;i++)
 {
 if((a[i]%2==0))
  even++;
 if((a[i]%2==1))
  odd++;
 if(a[i]<0)
  neg++;
 }
 /*Display the number of odd and even integer`s*/
 printf("Total number of even integer are %d\n",even);
 printf("Total number of odd integer are %d\n",odd);
 printf("Total negative integer are %d",neg);
 getch();
}