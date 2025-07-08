#include<stdio.h>
#include<conio.h>
int a[20][20], stack[20], visited[20],j,n,x,i, top = -1;
void dfs(int v) {
	for(i = 1; i <= n; i++)
	{
	if(a[v][i] && !visited[i])
	 {
	  stack[++top] = i;
	 }
	}
	while(top != -1)
	{
	 x = stack[top];
	 if(!visited[x])
	 printf("%d",x);
	 visited[x] = 1;
	 top = top - 1;
	 dfs(x);
	}
}

void main() {
	int v;
	clrscr();
	printf("\n Enter the number of vertices:");
	scanf("%d", &n);

	for(i=1; i <= n; i++) {
		stack[i] = 0;
		visited[i] = 0;
	}

	printf("\n Enter graph data in matrix form:\n");
	for(i=1; i<=n; i++)
	{
		for(j=1;j<=n;j++)
		{
		  printf("%d-%d :  ",i,j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n Enter the starting vertex:");
	scanf("%d", &v);
	printf("  %d",v);
	visited[v] = 1;
	dfs(v);
	getch();
      return;
}