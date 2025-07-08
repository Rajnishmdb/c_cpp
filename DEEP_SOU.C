#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i;
    clrscr();
    for(i=0;i<=250;i++)
    {
	 sound(264);
	 delay(500);
	 printf(" %d",i);
    }
    nosound();
    getch();
    return;
}
