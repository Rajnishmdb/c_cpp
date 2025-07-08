#include<stdio.h>
#include<conio.h>
#define maxsize 50
void bubbleSort(int arr[],int m);
int main()
{
     int i;
     int a[maxsize],N;
     clrscr();
     printf("\nEnter the number of element  for sort :- ");
     scanf("%d",&N);
     printf("\nEnter %d Elements :-\n",N);
     for(i = 0;i < N;i++)
     {
	 scanf("%d",&a[i]);
     }
     bubbleSort(a,N);
     printf("\nSorted Element :-\n");
     for(i = 0;i < N;i++)
     {
	  printf("%d\n",a[i]);
     }
     getch();
     return 0;
}
void bubbleSort(int arr[],int m)
{
     int i,j,temp;
     for(i=(m-1);i>0;i--)
     {
	 for(j=0;j<i;j++)
	 {
	     if(arr[j] > arr[j+1])
	     {
		  temp = arr[j];
		  arr[j] = arr[j+1];
		  arr[j+1] = temp;
	     }
	 }
     }
}