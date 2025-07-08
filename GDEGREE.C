#include<stdio.h>
#include<conio.h>
void main(){
	int a[20][20],InD[20],OutD[20],i,j,n;
	clrscr();
	for(i=1; i <= n; i++) {
		InD[i] = 0;
		OutD[i] = 0;
	}
	printf("\n Enter the number of vertices:");
	scanf("%d", &n);
	printf("\n Enter graph data in matrix form:\n");
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n;j++)
		{
		  printf("%d -> %d :  ",i,j);
			scanf("%d", &a[i][j]);
		}
	}
	for(i=1; i<=n; i++)
	{
	 for(j=1;j<=n;j++)
	 {
	  if(a[j][i] == 1)
	    InD[i] = InD[i] + a[j][i];
	   else
	    if(a[i][j] == 1)
	      OutD[i] = OutD[i]+a[i][j] ;
	  }
	 }
	for(i=1; i <= n; i++)
	{
	 printf("\n Indergee of %d = %d  & ",i,InD[i]);
	 printf("Out dergee of %d = %d \n",i,OutD[i]);
	}
	getch();
	return;
       }
