#include<stdio.h>
#include<conio.h>
int binarySearch(int arr,int l,int h,int element)
{
 if(l<h)
 {
   int mid = (h-l)/2 + l;
  if(arr[mid] == element)
   return(mid);
  else
  if(arr[mid] < element)
  return(binarySearch(arr,mid+1,h,element));
  else
    return(binarySearch(arr,l,mid-1,element));
  }
 return(-1);
}
int main()
{
 int l=0,h=9;
 int i ,j,mid,element,arr[15];
 printf("Enter the value in array \n");
 for(i=0;i<10;i++)
 scanf("%d",&arr[i]);
  printf("Enter the value to search");
  scanf("%d",&element);
 mergeSort(arr,l,h);
 for(i=0;i<10;i++)
 printf("%d",arr[i]);
 getch();
 return 0;
}