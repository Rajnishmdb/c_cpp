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
void delete_first();
void delete_after_node(int);
void delete_before_node(int);
//void delete_last_node();
struct node *findNode(int);
struct node *find_Sec_prepos(int);
//struct node *find_Slast();
struct node *head = '\0';
struct node *first = '\0';
struct node *second= '\0';
struct node *third = '\0';
struct node *fourth= '\0';
struct node *fifth = '\0';
int main()
{
   clrscr();
   printf("*******Create link  list*******\n");
   createList();
   display();
   printf("\nDeletion at first node from link list :\n");
   delete_first();
   display();
   printf("\nDeletion at before any node from link list :\n");
   delete_before_node(4);
   display();
   printf("\nDeletion at after any node from link list :\n");
   delete_after_node(4);
   display();
   /*printf("\nDelete last node from the link list : \n");
   delete_last_node();
   display();*/
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
   fourth= (struct node *)malloc(sizeof(struct node));
   fourth->data = 4;
   fourth->link = '\0';
   third->link = fourth;
   fifth= (struct node *)malloc(sizeof(struct node));
   fifth->data = 5;
   fifth->link = '\0';
   fourth->link = fifth;

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
void delete_first()
{
   struct node *temp = head;
   head = head->link;
   temp->link = '\0';
   printf("   Deleted data : %d\n",temp->data);
   free(temp);
}
struct node *findNode(int x)
{
   struct node *y = head;
   while(y != NULL)
   {
     if(y->data == x)
     {
       break;
     }
     y = y->link;
   }
   return(y);
}
void delete_after_node(int x)
{
   struct node *nptr = findNode(x);
   struct node *temp = nptr->link;
   nptr->link = temp->link;
   temp->link = '\0';
   printf("   Deleted data : %d\n",temp->data);
   free(temp);
}
struct node *find_Sec_prepos(int x)
{
   struct node *y = head,*prepos='\0',*prepos_s = '\0';
   while(y != NULL)
   {
     if(y->data == x)
     {
       break;
     }
     prepos_s = prepos;
     prepos = y;
     y = y->link;
   }
   return(prepos_s);
}

void delete_before_node(int q)
{
   struct node *FN1 = findNode(q);
   struct node *FN2 = find_Sec_prepos(q);
   struct node *temp = FN2->link;
   FN2->link = FN1;
   temp->link = '\0';
   printf("   Deleted data : %d\n",temp->data);
   free(temp);
}
/*struct node *find_Slast()
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
   printf("\nDeleted data : %d\n",temp->data);
   free(temp);
}  */




