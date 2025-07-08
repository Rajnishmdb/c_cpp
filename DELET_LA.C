#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
void createList();
void display();
void delete_last_node();
struct node *find_Slast();
struct node *head = '\0';
struct node *first = '\0';
struct node *second= '\0';

int main()
{
   clrscr();
   printf("*******Create link  list*******\n");
   createList();
   display();
   printf("\nDelete last node from the link list : \n");
   delete_last_node();
   display();
   getch();
   return 0;
}
void createList()
{
   first = (struct node *)malloc(sizeof(struct node));
   first->data = 1;
   first->link = '\0';
   head = first;
   second = (struct node *)malloc(sizeof(struct node));
   second->data = 2;
   second->link = '\0';
   first->link = second;
}
void display()
{
   struct node *p = head;
   if(p == NULL)
   {
      printf("\nLink is empty\n");
   }
   else
   {
      while(p != NULL)
      {
	 printf("   %d -> ",p->data);
	 p = p->link;
      }
   }
}
struct node *find_Slast()
{
   struct node *p = head,*pos='\0';
   while(p->link != NULL)
   {
     pos = p;
     p = p->link;
   }
   return(pos);
}
void delete_last_node()
{
   struct node *N = find_Slast();
   struct node *temp = N->link;
   N->link = '\0';
   //free(temp);
   printf("\n  Deleted data : %d\n",temp->data);
   free(temp);
}




