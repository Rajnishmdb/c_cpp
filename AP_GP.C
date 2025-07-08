# include <stdio.h>
# include <conio.h>
int main()
{
 int a,n,d,A,s;
 clrscr();
 printf("\nEnter the value of a,n,d: ");
 scanf("%d%d%d", &a,&n,&d);
 A = a + ( n - 1 )*d;
 s =n / 2  * (2 * a + ( n -1) * d );
  printf("\n An = %d and Sn = %d",A,s);
  getch();
  return 0;
}