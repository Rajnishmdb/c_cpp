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
int Top = -1;
int stack[maxsize];
int isEmpty();
void push(struct Bnr_Node *);
int pop();
struct Bnr_Node *R = '\0';
void insert_tree(int arr[],int);
void preoder_WO_rec(struct Bnr_Node *);
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
     preoder_WO_rec(R);
     //preOrder(R);
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
void preoder_WO_rec(struct Bnr_Node *root)
{
     while(1)
     {
	 if(root != 0)
	 {
		 printf("\t%d",root->data);
		 push(root);
		 root = root->lptr;
	 }
	 else
	 {
		 if(!isEmpty())
		 {
		    root = pop();
		    root = root->rptr;
		 }
		 else
		    break;
	 }
     }
}
int isEmpty()
{
    if(Top == -1)

	return(1);

    else

       return(0);

}
void push(struct Bnr_Node *data)
{
    if(Top == maxsize)

	 printf("Stack overloaded");

    else
    {
	 Top = Top + 1;
	 stack[Top] = data;
    }
}
int pop()
{
    int temp;
    if(isEmpty())
    {
	 printf("Stack is underflow");
    }
    else
    {
	 temp = stack[Top];
	 Top = Top - 1;
    }
    return(temp);
}