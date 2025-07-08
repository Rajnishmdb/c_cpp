#include<stdio.h>
#include<conio.h>
struct douNode
{
     struct douNode *plink;
     int data;
     struct douNode *nlink;
};
struct douNode *head = '\0';
struct douNode *F ='\0';
struct douNode *S ='\0';
struct douNode *T ='\0';
void createDlist();
void insert_at_first(int);
void insert_after_node(int,int);
void insert_before_node(int,int);
void insert_at_last(int);
void delete_given_node(int);
struct douNode *find_Node(int);
//struct douNode *find_last();
void display();
int main()
{
     clrscr();
     printf("\n##-##-##- CREATE DOUBLY LINK LIST -##-##-##\n");
     createDlist();
     display();
     printf("\n\n----- Insert at First in DLL -----\n");
     insert_at_first(38);
     display();
     printf("\n\n----- Insert at After Node (22) in DLL -----\n");
     insert_after_node(22,69);
     display();
     printf("\n\n----- Insert at Before Node (22) in DLL -----\n");
     insert_before_node(22,990);
     display();
     printf("\n\n----- Insert at Last in DLL -----\n");
     insert_at_last(1000);
     display();
     delete_given_node(11);
     printf("\n\n--- Rest Data in The DLL ---\n");
     display();
     delete_given_node(66);
     printf("\n\n--- Rest Data in The DLL ---\n");
     display();
     delete_given_node(22);
     printf("\n\n--- Rest Data in The DLL ---\n");
     display();
     getch();
     return 0;
}
void createDlist()
{
     F = (struct douNode*)malloc(sizeof(struct douNode));
     F->plink = '\0';
     F->data = 11;
     F->nlink = '\0';
     head = F;
     S = (struct douNode*)malloc(sizeof(struct douNode));
     S->plink = F;
     S->data = 22;
     S->nlink = '\0';
     F->nlink = S;
     T = (struct douNode*)malloc(sizeof(struct douNode));
     T->plink = S;
     T->data = 66;
     T->nlink = '\0';
     S->nlink = T;
}
void display()
{
     struct douNode *p = head;
     if(p->data!='\0')
     {
     while(p != '\0')
     {
	  printf("  %d-> ",p->data);
	  p = p->nlink;
     }
     }
     else
     {
	  printf(" List is empty");
     }
}
void insert_at_first(int a)
{
     struct douNode *temp = '\0';
     temp = (struct douNode*)malloc(sizeof(struct douNode));
     temp->data = a;
     temp->nlink = head;
     head->plink = temp;
     head = temp;
}
struct douNode *find_Node(int z)
{
     struct douNode *p = head;
     while(p != '\0')
     {
	  if(p->data == z)
	  {
	      break;
	  }
	  p = p->nlink;
     }
     return(p);
}
void insert_after_node(int x,int b)
{
     struct douNode *temp = '\0';
     struct douNode *mid1 = find_Node(x);
     temp = (struct douNode*)malloc(sizeof(struct douNode));
     temp->data = b;
     temp->plink = mid1;
     temp->nlink = mid1->nlink;
     mid1->nlink = temp;
     temp->nlink->plink = temp;
}
void insert_before_node(int y,int c)
{
     struct douNode *temp = '\0';
     struct douNode *mid2 = find_Node(y);
     temp = (struct douNode*)malloc(sizeof(struct douNode));
     temp->data = c;
     temp->plink = mid2->plink;
     temp->nlink = mid2;
     temp->plink->nlink = temp;
     mid2->plink = temp;
}
struct douNode *find_last()
{
     struct douNode *p = head,*ln;
     while(p != '\0')
     {
	  ln = p;
	  p = p->nlink;
     }
     return(ln);
}
void insert_at_last(int d)
{
     struct douNode *temp = '\0';
     struct douNode *last = find_last();
     temp = (struct douNode*)malloc(sizeof(struct douNode));
     temp->data = d;
     temp->plink = last;
     last->nlink = temp;
     temp->nlink = '\0';
}
void delete_given_node(int p)
{
      struct douNode *pon = find_Node(p);
      if(pon == head)
      {
	  pon->nlink->plink = '\0';
	  head = pon->nlink;
	  printf("\n\nDeleted element from the list : %d",pon->data);
	  pon->nlink = '\0';
	  free(pon);
      }
      else
      {
	  if(pon->nlink == '\0')
	  {
	       struct douNode *ppn = find_Node(p);
	       ppn->plink->nlink = '\0';
	       printf("\n\nDeleted element from the list : %d",pon->data);
	       pon->plink = '\0';
	       free(pon);
	  }
	  else
	  {
	       struct douNode *ppon = find_Node(p);
	       ppon->plink->nlink = ppon->nlink;
	       ppon->nlink->plink = ppon->plink;
	       printf("\n\nDeleted element from the list : %d",ppon->data);
	       ppon->plink = '\0';
	       ppon->nlink = '\0';
	       free(pon);
	  }
      }
}







