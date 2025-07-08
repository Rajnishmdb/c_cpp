#include<stdio.h>
#include<conio.h>
int main()
{
	int wt[50],ct[50],tat[50],bt[50],n,i,j;
	float Awt=0,Atat=0;
	clrscr();
	printf("Enter The Number of Processes To Execute: ");
	scanf("%d", &n);
	printf("\nEnter The Burst Time of Processes:\n\n");
	for(i = 0; i < n; i++)
	{
		printf("P%d: ", i+ 1);
		scanf("%d", &bt[i]);
	}
	for(i = 0; i < n;i++)
	{
	  if(i==0)
		{
		 wt[0] = 0;
		 ct[0] = bt[0];
		 }
	  else
		{
		 wt[i] = wt[i-1] + bt[i-1];
		 ct[i] = ct[i-1] + bt[i];
		 }
	}
	 printf("\nProcess  Burst Time  Waiting Time CompletionTime Turnaround Time\n");
	for(i = 0; i < n;i++)
	{
		tat[i] = bt[i] + wt[i];
		Awt = Awt + wt[i];
		Atat = Atat + tat[i];
		printf("\nP%d \t\t%d \t%d\t\t%d\t\t%d", i + 1, bt[i], wt[i],ct[i],tat[i]);
		printf("\n");
	}
	Awt = Awt /n;
	Atat = Atat / n;
	printf("\nAverage Waiting Time = %3f", Awt);
	printf("\nAverage Turnaround Time = %3f", Atat);
	printf("\n");
	getch();
	return 0;
}
