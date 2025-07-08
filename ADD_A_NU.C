# include <stdio.h>
# include <conio.h>
int main()
{
 int num,temp,rem,add,count;
 clrscr();
 printf("\nEnter the numder: ");
 scanf("%d",&num);
 clrscr();
 temp = num;
 add = 0;
 count = 0;
 while(temp>0)
 {
  rem = temp % 10;
  add =add + rem;
  count= count+1;
  temp = temp / 10;
 }
 printf("\n You entered %d digit number is %d",count,num);
 printf("\n Addition of these %d digit is %d",count,add);
 getch();
 return 0;
 }

