/* dfa for accepting  string having two consequitive a's */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int cState, i,len;
 char str[10],c;
 enum state {p,q,r,qd};
 clrscr();
 printf("\n Enter the string in the form of a,b : \n");
 scanf("%s",str);
 cState = p;
 len = strlen(str);
 for(i=0; i< len;i++)
 {
  c = str[i];
  if(cState == p)
  {
   if(c=='a')
    cState = q;
   else if(c=='b')
    cState = p;
   else
    cState = qd;
  }
  else if(cState == q)
   {
    if(c =='a')
      cState = r;
    else if(c=='b')
     cState = p;
   else
    cState = qd;
   }
   else if(cState == r)
   {
    if(c =='a')
      cState = r;
    else if(c=='b')
    cState = r;
   else
    cState = qd;
   }

 }
  if(cState == r)
   printf("\n String is accepted");
  else if(cState == qd)
   printf("\n String is not accepted it contain other symbol ");
  else
   printf("\n String is not accepted ,because it does not contain two consequitive a's ");
 getch();
 return 0;
}
