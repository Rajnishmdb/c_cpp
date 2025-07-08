/* dfa for accepting  string having the (number of a's) mod 3 =1 */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[10],c,len,i,cState;
 enum state{q0,q1,qf,qd};
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
    cState = qf;
   else if(c=='b')
    cState = q0;
   else
    cState = qd;
  }
  else if(cState == qf)
   {
    if(c =='a')
      cState = q1;
    else if(c=='b')
	cState = qf;
     else
       cState = qd;
   }
  else if(cState == q1)
   {
    if(c =='a')
      cState = q0;
    else if(c=='b')
	cState = q1;
     else
       cState = qd;
   }

}
 if(cState == qf)
  printf("\n String is accepted");
 else if(cState == qd)
  printf("\n String is not accepted it contain other symbol ");
  else
   printf("\n String is not accepted ,because it does not contain the (number of a's) mod 3 =1 ");
 getch();
 return 0;
}
