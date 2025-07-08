/* dfa for accepting  string end with 'aa'*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int cState, i,len;
 char str[10],c;
 enum state {q0,q1,qf,qd};
 clrscr();
 printf("\n Enter the string in the form of a,b : \n");
 scanf("%s",str);
 cState = q0;
 len = strlen(str);
 for(i=0; i< len;i++)
 {
  c = str[i];
  if(cState == q0)
  {
   if(c=='a')
    cState = q1;
   else if(c=='b')
    cState = q0;
   else
    cState = qd;
  }
  else if(cState == q1)
   {
    if(c =='a')
      cState = qf;
    else if(c=='b')
     cState = q0;
   else
    cState = qd;
   }
   else if(cState == qf)
   {
    if(c =='a')
      cState = qf;
    else if(c=='b')
    cState = q0;
   else
    cState = qd;
   }

 }
  if(cState == qf)
   printf("\n String is accepted");
  else if(cState == qd)
   printf("\n String is not accepted it contain other symbol ");
  else
   printf("\n String is not accepted ,because it is not ending with 'aa'");
 getch();
 return 0;
}
