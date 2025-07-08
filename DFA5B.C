/* dfa for accepting  string having the (length of b) mod 2 = 0 */
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
 char str[10],c,len,i,cState;
 enum state{A,B,qd};
 clrscr();
 printf("\n Enter the string in the form of a,b : \n");
 scanf("%s",str);
 cState = A;
  len = strlen(str);
 for(i=0; i< len;i++)
 {
  c = str[i];
  if(cState == A)
  {
   if(c=='a')
    cState = A;
   else if(c=='b')
    cState = B;
   else
    cState = qd;
  }
  else if(cState == B)
   {
    if(c =='a')
      cState = B;
    else if(c=='b')
	cState = A;
     else
       cState = qd;
   }
}
 if(cState == A)
  printf("\n String is accepted");
 else if(cState == qd)
  printf("\n String is not accepted it contain other symbol ");
  else
   printf("\n String is not accepted ,because it does not contain the (number of b's) mod 2 = 0 ");
 getch();
 return 0;
}
