/* dfa for accepting  string having the length multiple of four a's
    or multiple of four b's or equal number of a's and b's.  */
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
    if(c=='b')
     cState =3;
   else
    {
      cState =10;
      printf("\n String contain another letter rather than 'a,b'");
    }
  }
  else if(cState == 1)
   {
     if(c=='a')
      cState = 2;
     else
      if(c=='b')
	cState =0;
      else
       {
	cState =10;
	printf("\n String contain another letter rather than 'a,b'");
       }
   }
   else if(cState == 2)
   {
     if(c=='a')
      cState = 3;
     else
      if(c=='b')
	cState =1;
      else
       {
	cState =10;
	printf("\n String contain another letter rather than 'a,b'");
       }
   }
   else if(cState == 3)
   {
     if(c=='a')
      cState = 0;
     else
      if(c=='b')
	cState =2;
      else
       {
	cState =10;
	printf("\n String contain another letter rather than 'a,b'");
       }
   }
 }
  if( cState ==0)
    printf("\n String Accepted ");
  else
   printf("\n\n String not accepted.\n string does not having the length multipleof four a's \n or multiple of four b's or equal number of a's and b's");
  getch();
  return 0;
 }