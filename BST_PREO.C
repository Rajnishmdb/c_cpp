#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define maxsize 50
struct Bnr_Node
{
     struct Bnr_Node *lptr;
     int data;
     struct Bnr_Node *rptr;
};
int count = 0;
struct Bnr_Node *R = '\0';
void insert_tree(int arr[],int);
void preOrder(struct Bnr_Node *);
int main()
{
     int a[maxsize],n;
     int i=0;
     clrscr();
     printf("\nEnter the height of tree : ");
     scanf("%d",&n);
     printf("\nEnter the data of tree : ");
     for(i=0;i<n;i++)
     {
	   printf("\n%d :- ",i+1);
	   scanf("%d",&a[i]);
     }
     insert_tree(a,n);
     printf("\nPreordered BST \n");
     preOrder(R);
     getch();
     return 0;
}
struct Bnr_Node *temp;
struct Bnr_Node *new1;
void insert_tree(int arr[],int heigt)
{
     int i,h;
     i = 0;
     h = heigt;
     while(i < h)
     {
	   new1 = (struct Bnr_Node *)malloc(sizeof(struct Bnr_Node));
	   new1->lptr = '\0';
	   new1->data = arr[i];
	   new1->rptr = '\0';
	   if(R == '\0')
	       R = new1;
	   else
	   {
	     temp = R;
	     while(temp != '\0')
	     {
	       if(new1->data <= temp->data)
	       {
		   if(temp->lptr == '\0')
		   {
		       temp->lptr = new1;
		       break;
		   }
		   temp = temp->lptr;
	       }
	       else
	       {
		   if(temp->rptr == '\0')
		   {
		       temp->rptr = new1;
		       break;
		   }
		   temp = temp->rptr;
	       }
	     }
	   }
	   i++;
     }
}
void preOrder(struct Bnr_Node *R)
{
     if(R != '\0')
     {
	    printf("\t%d",R->data);
	    preOrder(R->lptr);
	    preOrder(R->rptr);
     }
}
