#include<stdio.h>
#include<conio.h>
#define True 1
#define False 0
#define Max_size 10
int is_queue_empty(int front, int rear)
{
if(front > rear)
  return True;
else
  return False;
}
int is_queue_full(int rear)
{
if(rear == Max_size - 1)
  return True;
else
  return False;
}
int insert_queue(int queue[Max_size],int *rear,int data)
{
if(is_queue_full(*rear))
{
printf("\n Queue is full");
return -1;
}
*rear = *rear + 1;
queue[*rear] = data;
return 0;
}
int delete_queue(int queue[Max_size],int *front,int *rear,int *data)
{
if(is_queue_empty(*front,*rear))
{
printf("\n Queue is empty");
return -1;
}
*data = queue[*front];
*front = *front + 1;
if(*front > *rear)
{
*front = 0;
*rear = -1;
}
return *data;
}
void bfs(int queue,&front,&rear,&data)
{
 int x;
 step1: insert_queue(queue,&rear,data);
 step2: x = delete_queue(queue,&front,&rear,&data);
 step3: if(!visited[x])
	{
	 printf("%d",x);
	 visited[x] = 1;
	 }
 step4: for(i = 1; i <= n; i++)
	 if(a[v][i] && !visited[i])
	 {
	  insert_queue(queue,&rear,i);
	 }
 step5: if(is_queue_full(*rear))
	switch(step2)

}
int main()
{
int queue[Max_size],choice,front,rear,data,value;
int a[20][20], visited[20], n,v, i, j, f = 0, r = -1;
clrscr();
front = 0;
rear = -1;

	printf("\n Enter the number of vertices:");
	scanf("%d", &n);

	for(i=1; i <= n; i++) {
		queue[Max_size] = 0;
		visited[i] = 0;
	}

	printf("\n Enter graph data in matrix form:\n");
	for(i=1; i<=n; i++) {
		for(j=1;j<=n;j++)
		{
		  printf("%d-%d",i,j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n Enter the starting vertex:");
	scanf("%d", &data);
	bfs(int queue,&front,&rear,&data)
getch()
return 0;
}