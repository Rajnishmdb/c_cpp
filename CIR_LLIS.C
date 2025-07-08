#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct cirNode
{
     int data;
     struct cirNode *link;
};
int count = 0;
struct cirNode *head = '\0';
struct cirNode *lptr = '\0';
struct cirNode *rptr = '\0';
struct cirNode *F = '\0';
struct cirNode *S = '\0';
void createlist();
void insert_at_first(int);
void insert_after_node(int,int);
void insert_before_node(int,int);
void insert_last(int);
void delete_given_node(int);
struct cirNode *findNode(int);
struct cirNode *find_SNode(int);
struct cirNode *findLast();
void display();
int main()
{
     printf("######_ CREATE CIRCULAR LINK LIST _######\n");
     createlist();
     display();
     printf("\n\n---Insert at First Node in CLL---\n");
     insert_at_first(66);
     display();
     printf("\n\n---Insert at After Node (10) in CLL---\n");
     insert_after_node(10,55);
     display();
     printf("\n\n---Insert at Before Node (10) in CLL---\n");
     insert_before_node(10,33);
     display();
     printf("\n\n---Insert at Last Node in CLL---\n");
     insert_last(99);
     display();
     delete_given_node(99);
     printf("\n\n---Rest Data in the CLL---\n");
     display();
     getch();
     return 0;
}
void createlist()
{

     lptr = (struct cirNode*)malloc(sizeof(struct cirNode));
     lptr -> data = count;
     lptr -> link = '\0';
     head = lptr;
     F = (struct cirNode*)malloc(sizeof(struct cirNode));
     F -> data = 10;
     F -> link = '\0';
     lptr -> link = F;
     S = (struct cirNode*)malloc(sizeof(struct cirNode));
     S->data = 11;
     S -> link = '\0';
     F -> link = S;
     S->link = lptr;
     rptr = S;
     count++;
}
void display()
{
     struct cirNode *p = head -> link;
     while(p != head)
     {
	  printf("  %d-> ",p->data);
	  p = p->link;
     }
}
void insert_at_first(int a)
{
     struct cirNode *temp = '\0';
     temp = (struct cirNode*)malloc(sizeof(struct cirNode));
     temp->data = a;
     temp->link = lptr->link;
     lptr->link = temp;
}
struct cirNode *findNode(int q)
{
     struct cirNode *n = head->link;
     while(n != head)
     {
	  if(n->data == q)
		break;
	  n= n->link;
     }
     return(n);
}
void insert_after_node(int x,int b)
{
     struct cirNode *mid1 = findNode(x);
     struct cirNode *temp = '\0';
     temp = (struct cirNode*)malloc(sizeof(struct cirNode));
     temp->data = b;
     temp->link = mid1->link;
     mid1->link = temp;
}
struct cirNode *find_SNode(int r)
{
     struct cirNode *n = head->link,*prep = '\0';
     while(n != head)
     {
	  if(n->data == r)
		break;
	  prep = n;
 	  n= n->link;
     }
     return(prep);
}
void insert_before_node(int y,int c)
{
     struct cirNode *mid2 = find_SNode(y);
     struct cirNode *temp = '\0';
     temp = (struct cirNode*)malloc(sizeof(struct cirNode));
     temp->data = c;
     temp->link = mid2->link;
     mid2->link = temp;
}
struct cirNode *findLast()
{
     struct cirNode *p = head->link;
     while(p->link != lptr)
     {
	 p = p->link;
     }
     return(p);
}
void insert_last(int d)
{
     struct cirNode *loc = findLast();
     struct cirNode *temp = '\0';
     temp = (struct cirNode*)malloc(sizeof(struct cirNode));
     temp->data = d;
     temp->link = loc->link;
     loc->link = temp;
     rptr = temp;
}
void delete_given_node(int z)
{
      struct cirNode *pon = findNode(z);
      if(pon == lptr->link)
      {
	  lptr->link = pon->link;
	  printf("\n\nDeleted element from the list : %d",pon->data);
	  pon->link = '\0';
	  free(pon);
      }
      else
      {
	  if(pon == rptr)
	  {
	       struct cirNode *ppn = find_SNode(z);
	       ppn->link = lptr;
	       rptr = ppn;
	       printf("\n\nDeleted element from the list : %d",pon->data);
	       pon->link = '\0';
	       free(pon);
	  }
	  else
	  {
	       struct cirNode *ppon = find_SNode(z);
	       ppon->link = pon->link;
	       printf("\n\nDeleted element from the list : %d",pon->data);
	       pon->link = '\0';
	       free(pon);
	  }
      }
}

