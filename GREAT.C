#include<stdio.h>
#include<conio.h>
int main()
{
 int a,b,c;
 clrscr();
 printf("Enter the value of a,b and c");
 scanf("%d%d%d",&a,&b,&c);
 printf("\n the largest number is   ");
 if(a>b)
 {
  if(b>c)
    printf("\n %d",a);
  else
    printf("\n %d",c);
  }
  else
  {
   if(c>b)
    printf("\n %d",c);
   else
    printf("\n %d",b);
   }
 getch();
 return 0;
}

