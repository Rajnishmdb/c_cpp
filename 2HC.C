#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,s,area;
clrscr();
printf("\n Enter the sides of triangle");
scanf("%d%d%d",&a,&b,&c);
s = (a + b + c) / 2;
area = sqrt(s * (s - a) * (s - b) * (s - c));
printf("\n Area of triangle is %d",area);
getch();
return 0;
}
