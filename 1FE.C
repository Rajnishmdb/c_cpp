#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,r,a,p;
float ca,c;
clrscr();
printf("\nEnter length of rectangle");
scanf("%d",&l);
printf("\nEnter breadth of rectangle");
scanf("%d",&b);
a = l * b;
printf("\nArea of rectangle is %d",a);
p = 2 * (l + b);
printf("\n perimeter of rectangle is %d",p);
printf("\n --------------------------------");
printf("\n Enter radius of circle");
scanf("%d",&r);
ca = 3.14 * r * r;
printf("\n Area of circle is %f",ca);
c = 2 * 3.14 * r;
printf("\n Circumference of circle is %f",c);
getch();
return 0;
}


