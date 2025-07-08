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
void delete_given_node(int);
struct node *findNode(int);
struct node *find_prePos(int);
struct node *head = '\0';
struct node *first = '\0';
struct node *second= '\0';
struct node *third = '\0';
int main()
{
   clrscr();
   printf("*******Create link  list*******\n");
   createList();
   display();
   //printf("\nDelete last node from the link list : \n");
   delete_given_node(3);
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
   third = (struct node *)malloc(sizeof(struct node));
   third->data = 3;
   third->link = '\0';
   second->link = third;
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
struct node *findNode(int x)
{
   struct node *p = head;
   while(p->link != '\0')
   {
       if(p->data == x)
	     break;
       p = p->link;
   }
   return(p);
}
struct node *find_prePos(int x)
{
   struct node *p = head,*prepos = '\0';
   while(p->link != '\0')
   {
       if(p->data == x)
	     break;
       prepos = p;
       p = p->link;
   }
   return(prepos);
}
void delete_given_node(int a)
{
   struct node *N = findNode(a);
   struct node *N1 = find_prePos(a);
   struct node *temp = N;
   N1->link = temp->link;
   temp->link = '\0';
   printf("\n  Deleted data : %d\n",temp->data);
   free(temp);
}




