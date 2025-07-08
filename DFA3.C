/* dfa for accepting  single starting with  'aa'*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int cState=0, i,len;
 char str[10],c;
 clrscr();
 printf("\n Enter the string in the form of a,b : \n");
 scanf("%s",str);
 len = strlen(str);
 for(i=0; i< len;i++)
 {
  c = str[i];
  if(cState == 0)
  {
   if(c=='a')
    cState = 1;
   else
    cState =3;
  }
  else if(cState == 1)
   {
    if(c =='a')
      cState = 2;
    else
     cState = 3;
   }
   else
     if(cState == 2)
     {
      if(c =='a')
       cState = 2;
      else
       cState = 2;
     }
     else
     {
      cState = 3;
     }
  }
  if( cState ==2)
    printf("\n String Accepted ");
  else
   printf("String not accepted");
  getch();
  return 0;
 }