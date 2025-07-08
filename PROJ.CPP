#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
   int reg_no;
   char name[25];
   char branch_name[30];
   int marks[6],total_marks;
   struct node *ptr;
 };
typedef struct node *NODE;
NODE create_node()
{
   NODE temp;
   temp=(NODE)malloc(sizeof(struct node));
   if(temp==NULL)
   {
      printf("\nOut of memory:");
      exit(0);
   }
   return temp;
}
NODE create_list(NODE First,NODE temp)
{
   NODE temp1;
   if(First==NULL)
       return temp;
   temp1=First;
   while(temp1->ptr)
       temp1=temp1->ptr;
   temp1->ptr=temp;
   return First;
}
void display_list(NODE First)
{
   NODE temp;
   int i;
   clrscr();
   if(First==NULL)
   {
      printf("\nList is empty:");
      return;
   }
   temp=First;
   printf("\nThe present list is: ");
   while(temp)
   {
      printf("\nStudent Reg No:- %d",temp->reg_no);
      printf("\nStudent Name:- %s",temp->name);
      printf("\nBranch Name:- %s",temp->branch_name);
      for(i=0;i<6;++i)
	  printf("\nMarks of sub %d is : %d",i+1,temp->marks[i]);
      printf("\nTotal marks is: %d",temp->total_marks);
      temp=temp->ptr;
   }
   return;
}
int main(void)
{
   int reg_no,choice,branch_code,b;
   char name[25];
   char branch_name[30];
   int marks[6],total_marks;
   NODE Mech,Civil,Cse,Ece,temp,student[4];
   int data,no_of_branches,i,j,k,no_of_students;
   clrscr();
   printf("\nEnter no. of branches: ");
   scanf("%d",&no_of_branches);
   for(i=0;i<no_of_branches;++i)
   {
       printf("\n Enter the branch code(ME=0,CIVIL=1,CSE=2,EE=3) : ");
       scanf("%d",&b);
       switch(b)
       {
	    case 0:printf("\nEnter details of Mechanical Engineering Students: ");
	      printf("\nEnter no. of students in mechanical engg. branch:");
	      scanf("%d",&no_of_students);
	      Mech=NULL;
	      for(j=0;j<no_of_students;++j)
	      {
		temp=create_node();
		temp->ptr=NULL;
		printf("\nEnter registration no:");
		scanf("%d",&reg_no);
		temp->reg_no=reg_no;
		flushall();
		printf("\nEnter name : ");
		scanf("%[^\n]",&name);
		strcpy(temp->name,name);
		strcpy(branch_name,"Mechanical");
		strcpy(temp->branch_name,branch_name);
		total_marks=0;
		for(k=0;k<=5;++k)
		{
		  printf("\nEnter marks of subject %d :",k+1);
		  scanf("%d",&marks[k]);
		  temp->marks[k]=marks[k];
		  total_marks+=marks[k];
		}
		temp->total_marks=total_marks;
		Mech=create_list(Mech,temp);
	      }
	      student[0]=Mech;
	      break;
	    case 1:printf("\nEnter details of Civil Engineering Students: ");
	      printf("\nEnter no. of students in Civil engg. branch:");
	      scanf("%d",&no_of_students);
	      Civil=NULL;
	      for(j=0;j<no_of_students;++j)
	      {
		temp=create_node();
		temp->ptr=NULL;
		printf("\nEnter registration no:");
		scanf("%d",&reg_no);
		temp->reg_no=reg_no;
		flushall();
		printf("\nEnter name : ");
		gets(name);
		strcpy(temp->name,name);
		strcpy(branch_name,"Civil");
		strcpy(temp->branch_name,branch_name);
		total_marks=0;
		for(k=0;k<=5;++k)
		{
		   printf("\nEnter marks of subject %d :",k+1);
		   scanf("%d",&marks[k]);
		   temp->marks[k]=marks[k];
		   total_marks+=marks[k];
		}
		temp->total_marks=total_marks;
		Civil=create_list(Civil,temp);
	      }
	      student[1]=Civil;
	      break;
	    case 2:printf("\nEnter details of Cse Engineering Students: ");
	      printf("\nEnter no. of students in Cse engg. branch:");
	      scanf("%d",&no_of_students);
	      Cse=NULL;
	      for(j=0;j<no_of_students;++j)
	      {
		temp=create_node();
		temp->ptr=NULL;
		printf("\nEnter registration no:");
		scanf("%d",&reg_no);
		temp->reg_no=reg_no;
		flushall();
		printf("\nEnter name : ");
		gets(name);
		strcpy(temp->name,name);
		strcpy(branch_name,"Cse");
		strcpy(temp->branch_name,branch_name);
		total_marks=0;
		for(k=0;k<=5;++k)
		{
		  printf("\nEnter marks of subject %d :",k+1);
		  scanf("%d",&marks[k]);
		  temp->marks[k]=marks[k];
		  total_marks+=marks[k];
		}
		temp->total_marks=total_marks;
		Cse=create_list(Cse,temp);
	      }
	      student[2]=Cse;
	      break;
	    case 3:printf("\nEnter details of Ece Engineering Students: ");
	      printf("\nEnter no. of students in Ece engg. branch:");
	      scanf("%d",&no_of_students);
	      Ece=NULL;
	      for(j=0;j<no_of_students;++j)
	      {
		temp=create_node();
		temp->ptr=NULL;
		printf("\nEnter registration no:");
		scanf("%d",&reg_no);
		temp->reg_no=reg_no;
		flushall();
		printf("\nEnter name : ");
		gets(name);
		strcpy(temp->name,name);
		strcpy(branch_name,"Ece");
		strcpy(temp->branch_name,branch_name);
		total_marks=0;
		for(k=0;k<=5;++k)
		{
		  printf("\nEnter marks of subject %d :",k+1);
		  scanf("%d",&marks[k]);
		  temp->marks[k]=marks[k];
		  total_marks+=marks[k];
		}
		temp->total_marks=total_marks;
		Ece=create_list(Ece,temp);
	      }
	      student[3]=Ece;
	      break;
	    default:printf("\nInvalid choice: Try again");
       }
   }
   branch_code=2;
   while(branch_code>=0 && branch_code <=3)
   {
      clrscr();
      printf("\nEnter brach code for which data is to be displayed: ");
      scanf("%d",&branch_code);
      switch(branch_code)
      {
	 case 0:display_list(student[0]);
	   printf("\nPress a key to continue...");
	   getch();
	   break;
	 case 1:display_list(student[1]);
	   printf("\nPress a key to continue...");
	   getch();
	   break;
	 case 2:display_list(student[2]);
	   printf("\nPress a key to continue...");
	   getch();
	   break;
	 case 3:display_list(student[3]);
	   printf("\nPress a key to continue...");
	   getch();
	   break;
      }
   }
   return 0;
}