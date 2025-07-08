#include<stdio.h>
#include<conio.h>
#define True 1
#define False 0
#define Max_size 5
int is_circular_queue_empty(int count)
{
if(count==0)
  return True;
else
  return False;
}
int is_circular_queue_full(int count)
{
if(count== Max_size)
  return True;
else
  return False;
}
int insert_circular_queue(int queue[Max_size],int *rear,int * count,int data)
{
if(is_circular_queue_full(*count))
{
printf("\n Queue is full");
return -1;
}
*rear = (*rear + 1) % Max_size;
queue[*rear] = data;
*count = *count + 1;
return 0;
}
int delete_circular_queue(int queue[Max_size],int *front,int *count,int *data)
{
if(is_circular_queue_empty(*count))
{
printf("\nCircular queue is empty");
return -1;
}
*data = queue[*front];
*front = (*front + 1) % Max_size;
*count = *count -1;
return 0;
}
void display_circular_queue(int queue[Max_size],int front,int count)
{
int i;
if(is_circular_queue_empty(count))
{
printf("\nCircular queue is empty");
return;
}
printf("\n The present circular queue content is:");
for(i=1; i <= count; ++i)
{
printf("%5d",queue[front]);
front = (front + 1) % Max_size;
}
return;
}
int display_choice()
{
int choice;
printf("\n------MENU FOR QUEUE IMPLEMENTATION-----");
printf("\n1:Insert an element on the circular queue:");
printf("\n2:Deletes an element from the circular queue:");
printf("\n3:Display the circular queue content:");
printf("\n0:Exit");
printf("\n-----------------------------------------");
printf("\n Enter your choice ");
scanf("%d",&choice);
getch();
return choice;
}
int main()
{
int queue[Max_size],front,rear,count,data,choice,value;
front = 0;
rear = -1;
count = 0;
while((choice = display_choice()) != 0)
{
switch(choice)
{
case 1:printf("\n Enter data to be inserted:  ");
      scanf("%d",&data);
      value = insert_circular_queue(queue,&rear,&count,data);
      if(value == 0)
      printf("Entered data %d is pushed on the queue",data);
      printf("\n Press a key to continue");
      getch();
      break;

case 2:value = delete_circular_queue(queue,&front,&count,&data);
       if(value == 0)
      printf("\ndata deleted is %d ",data);
      printf("\n Press a key to continue");
      getch();
      break;

case 3:display_circular_queue(queue,front,count);
       printf("\n Press a key to continue");
      getch();
      break;
default :printf("\n Invalid choice try again");
	 printf("\n Press a key to continue");
	 getch();
	 break;
       }
      }
getch();
return 0;
}



