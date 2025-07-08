#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *link;
};
void createList(int,int);
void display();
int display_choice();

struct node *findNode(int);
struct node *find_Snode(int);
struct node *find_last();
struct node *find_Sec_prepos(int);
struct node *find_Slast();

void Insert_1st_list(int);
void Insert_midbef_list(int,int);
void Insert_midaft_list(int,int);
void Insert_last_list(int);

int delete_first();
int delete_before_node(int);
int delete_after_node(int);
int delete_last_node();

struct node *head = '\0';
struct node *first = '\0';
struct node *second= '\0';
int main()
{
   int choice,D1,D2;
   clrscr();
   while((choice=display_choice()) != 0)
   {
      switch(choice)
      {
	 case 1:printf("\n Enter two data for create list: ");
		scanf("%d%d",&D1,&D2);
		createList(D1,D2);
		printf("\n The data %d and %d are inserted ",D1,D2);
		printf("\n Press a key to be continue: ");
		getch();
		break;
	 case 2:printf("\n Enter data to be inserted: ");
		scanf("%d",&D1);
		Insert_1st_list(D1);
		printf("\n The data %d is inserted on the list",D1);
		printf("\n Press a key to be continue: ");
		getch();
		break;
	 case 3:printf("\n Enter data to be inserted and noda data: ");
		scanf("%d%d",&D1,&D2);
		Insert_midbef_list(D1,D2);
		printf("\n The data %d is inserted on the list",D1);
		printf("\n Press a key to be continue: ");
		getch();
		break;
	 case 4:printf("\n Enter data to be inserted and noda data: ");
		scanf("%d%d",&D1,&D2);
		Insert_midaft_list(D1,D2);
		printf("\n The data %d is inserted on the list",D1);
		printf("\n Press a key to be continue: ");
		getch();
		break;
	 case 5:printf("\n Enter data to be inserted: ");
		scanf("%d",&D1);
		Insert_last_list(D1);
		printf("\n The data %d is inserted on the list",D1);
		printf("\n press a key to continue");
		getch();
		break;
	 case 6:printf("\n Deleted Data = %d",delete_first());
		printf("\n press a key to continue");
		getch();
		break;
	 case 7:printf("\n Enter node for Deletion : ");
		scanf("%d",&D1);
		printf("\n Deleted Data = %d",delete_before_node(D1));
		printf("\n press a key to continue");
		getch();
		break;
	 case 8:printf("\n Enter node for Deletion : ");
		scanf("%d",&D1);
		printf("\n Deleted Data = %d",delete_after_node(D1));
		printf("\n press a key to continue");
		getch();
		break;
	 case 9:printf("\n Deleted Data = %d",delete_last_node());
		printf("\n press a key to continue");
		getch();
		break;
	 case 10:display();
		printf("\n press a key to continue");
		getch();
		break;
	 default:printf("\nInvaid choice try again");
		printf("\n Press a key to continue");
		getch();
		break;
      }

   }
   getch();
   return 0;
}
void createList(int a,int b)
{
   first = (struct node *)malloc(sizeof(struct node));
   first->data = a;
   first->link = '\0';
   head = first;
   second = (struct node *)malloc(sizeof(struct node));
   second->data = b;
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
	 printf(" %d -> ",p->data);
	 p = p->link;
      }
   }
}
void Insert_1st_list(int data1)
{
   struct node *temp;
   temp = (struct node *)malloc(sizeof(struct node));
   temp->data = data1;
   temp->link = head;
   head = temp;
}
void Insert_midaft_list(int data3,int p)
{
   struct node *midaf,*node = findNode(p);
   midaf = (struct node *)malloc(sizeof(struct node));
   midaf->data = data3;
   midaf->link = node->link;
   node->link = midaf;
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
struct node *find_Snode(int x)
{
   struct node *y = head,*prepos='\0';
   while(y != NULL)
   {
     if(y->data == x)
     {
       break;
     }
     prepos = y;
     y = y->link;
   }
   return(prepos);
}
void Insert_midbef_list(int data2,int z)
{
   struct node *midbf,*node1 = findNode(z);
   struct node *node2 = find_Snode(z);
   midbf = (struct node *)malloc(sizeof(struct node));
   //is_link_space(&midbf);
   midbf->data = data2;
   midbf->link = node1;
   node2->link = midbf;
}
struct node *find_last()
{
   struct node *p = head;
   while(p->link != NULL)
   {
     p = p->link;
   }
   return(p);
}
void Insert_last_list(int data4)
{
   struct node *last,*node3 = find_last();
   last = (struct node *)malloc(sizeof(struct node));
   last->data = data4;
   node3->link = last;
   last->link = '\0';
}
int display_choice()
{
   int choice;
   clrscr();
   printf("\n------MENU FOR LINK LIST IMPLEMENTATION-----");
   printf("\n1:Insert a data for create the link list");
   printf("\n2:Insert a data at first in the link list");
   printf("\n3:Insert a data before mid in the link list");
   printf("\n4:Insert a data after mid in the link list");
   printf("\n5:Insert a data at last from the link list");
   printf("\n6:Delete a data at first from the link list");
   printf("\n7:Delete a data before any node from the link list");
   printf("\n8:Delete a data after any node from the link list");
   printf("\n9:Delete a data at last from the link list");
   printf("\n10:Display data of the link list");
   printf("\n0:Exit");
   printf("\n-----------------------------------------");
   printf("\n Enter your choice : ");
   scanf("%d",&choice);
   getch();
   return choice;
}
int delete_first()
{
   struct node *temp1 = head;
   head = head->link;
   temp1->link = '\0';
   free(temp1);
   return(temp1->data);
}
int delete_after_node(int x)
{
   struct node *nptr = findNode(x);
   struct node *temp1 = nptr->link;
   nptr->link = temp1->link;
   temp1->link = '\0';
   free(temp1);
   return(temp1->data);
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

int delete_before_node(int q)
{
   struct node *FN1 = findNode(q);
   struct node *FN2 = find_Sec_prepos(q);
   struct node *temp1 = FN2->link;
   FN2->link = FN1;
   temp1->link = '\0';
   free(temp1);
   return(temp1->data);
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
int  delete_last_node()
{
   struct node *N = find_Slast();
   struct node *temp1 = N->link;
   N->link = '\0';
   free(temp1);
   return(temp1->data);
}


