#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[10],c,len,i,cState;
 enum state{q0A,qfA,q1A,q0B,qfB,q1B,qd};
 clrscr();
 printf("\n Enter the string in the form of a,b : \n");
 scanf("%s",str);
 cState = q0A;
  len = strlen(str);
 for(i=0; i< len;i++)
 {
  c = str[i];
  if(cState == q0A)
  {
   if(c=='a')
    cState = qfA;
   else if(c=='b')
    cState = q0B;
   else
    cState = qd;
  }
  else if(cState == qfA)
   {
    if(c =='a')
      cState = q1A;
    else if(c=='b')
	cState = qfB;
     else
       cState = qd;
   }
  else if(cState == q1A)
   {
    if(c =='a')
      cState = q0A;
    else if(c=='b')
	cState = q1B;
     else
       cState = qd;
   }
  else if(cState == q0B)
   {
    if(c =='a')
      cState = qfB;
    else if(c=='b')
	cState = q0A;
     else
       cState = qd;
   }
  else if(cState == qfB)
   {
    if(c =='a')
      cState = q1B;
    else if(c=='b')
	cState = qfA;
     else
       cState = qd;
   }
  else if(cState == q1B)
   {
    if(c =='a')
      cState = q0B;
    else if(c=='b')
	cState = q1A;
     else
       cState = qd;
   }
}
 if(cState == qfA)
  printf("\n String is accepted");
 else if(cState == qd)
  printf("\n String is not accepted it contain other symbol ");
  else
   printf("\n String is not accepted ,because it is not the string of language L3");
 getch();
 return 0;
}
