/* dfa for accepting  string having odd number of b's */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 int cState, i,len;
 char str[10],c;
 enum state {q0,qf,qd};
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
    cState = q0;
   else if(c=='b')
    cState = qf;
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
   printf("\n String is not accepted ,because it does not contain odd numder of b's ");
 getch();
 return 0;
}
