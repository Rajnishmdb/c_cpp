#include<stdio.h>
#include<conio.h>
int binary_search(int arr[], int l, int h, int temp)
{
   if (h >= l)
   {
	int mid = l + (h - l)/2;
	if(arr[mid] == temp)
	    return mid+1;
	if (arr[mid] > temp)
	    return binary_search(arr, l, mid-1, temp);
	else
	    return binary_search(arr, mid+1, h, temp);
   }
  return -1;
}
int main()
{
 int low,high,middle,size,search,a[20],i,loc;
 clrscr();
 printf("\n Enter the size of  array");
 scanf("%d",&size);
 printf("\n Enter the value in array in increasing order: \n");
 for(i=0;i<size;i++)
 {
  printf("\n%d:- ",i+1);
  scanf("%d",&a[i]);
 }
 clrscr();
 low=0;
 high =size-1;
 printf("\n Enter the value to be search in array ");
 scanf("%d",&search);
 loc = binary_search(a,low,high,search);
 if(loc != -1)
  printf("\n %d found at %d position  ",search,loc);
 else
  printf("\n Number is not found");
 getch();
 return 0;
}
