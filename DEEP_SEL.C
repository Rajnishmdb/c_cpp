#include<stdio.h>
#include<conio.h>
#define maxsize 50
void selectionSort(int arr[],int size);
int main()
{
    int n,i;
    int a[maxsize];
    clrscr();
    printf("\nEnter the number of data :- ");
    scanf("%d",&n);
    printf("Enter the data ");
    for(i=0;i<n;i++)
    {
	printf("\n%d :- ",i+1);
	scanf("%d",&a[i]);
    }
    selectionSort(a,n);
    printf("\nSorted Data");
    for(i=0;i<n;i++)
    {
	printf("\n%d",a[i]);
    }
    getch();
    return 0;
}
void selectionSort(int arr[],int size)
{
    int mpos,i,j,temp;
    for(i=0;i<size;i++)
    {
	mpos = i;
	for(j=i+1;j<size;j++)
	{
	    if(arr[j] > arr[mpos])
		 mpos = j;
	}
	temp = arr[mpos];
	arr[mpos] = arr[i];
	arr[i] = temp;
    }
}
