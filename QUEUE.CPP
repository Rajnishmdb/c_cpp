#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#define True 1
//#define False 0
#define Max_size 10
/*int is_queue_empty(int front, int rear)
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
}*/
int insert_queue(int queue[Max_size],int *rear,int data)
{
if(*rear == (Max_size-1))
{
printf("\n Queue is full");
exit(1);
}
*rear = *rear + 1;
queue[*rear] = data;
return 0;
}
int delete_queue(int queue[Max_size],int *front,int *rear,int *data)
{
if(*front == -1)
{
printf("\n Queue is empty");
exit(0);
}
*data = queue[*front];
*front = *front + 1;
if(*front > *rear)
{
*front = 0;
*rear = -1;
}
return 0;
}
void display_queue(int queue[Max_size],int front,int rear)
{
int i;
/*if(is_queue_empty(front,rear))
{
printf("\n Queue is empty");
return;
} */
printf("\n The present queue content is:");
for(i=front; i <= rear; ++i)
printf("%4d",queue[i]);
return;
}
int display_choice()
{
int choice;
clrscr();
printf("\n------MENU FOR QUEUE IMPLEMENTATION-----");
printf("\n1:Insert an element on the queue:");
printf("\n2:Deletes an element from the queue:");
printf("\n3:Display the queue content:");
printf("\n0:Exit");
printf("\n-----------------------------------------");
printf("\n Enter your choice ");
scanf("%d",&choice);
getch();
return choice;
}
int main()
{
int queue[Max_size],choice,front,rear,data,value;
clrscr();
front = 0;
rear = -1;
while((choice = display_choice()) != 0)
{
switch(choice)
{
case 1:printf("\n Enter data to be inserted:  ");
      scanf("%d",&data);
      value = insert_queue(queue,&rear,data);
      if(value == 0)
      printf("Entered data %d is pushed on the queue",data);
      printf("\n Press a key to continue");
      getch();
      break;

case 2:value = delete_queue(queue,&front,&rear,&data);
       if(value == 0)
      printf("\ndata deleted is %d ",data);
      printf("\n Press a key to continue");
      getch();
      break;

case 3:display_queue(queue,front,rear);
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




