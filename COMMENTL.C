#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int i,len;

 char str[100],c;
 clrscr();
 printf("\n Enter the lines : \n");
 gets(str);
 len = strlen(str);
 if(str[0]=='/' && str[1]=='/')
 {
  printf("\n The given line(i.e  %s ) is a comment line",str);
 }
 else
  if((str[0]=='/' && str[1]=='*') && (str[len -2]=='*' && str[len - 1]=='/'))
   {
    printf("\n The given line(i.e  %s ) is a comment line",str);
   }
  else
   {
    printf("\n The given line(i.e  %s )is not  a comment line",str);
   }
 getch();
 return 0;
}
