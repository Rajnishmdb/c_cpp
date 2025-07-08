#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
int main()
{
 int gd= DETECT,gm,err;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 err = graphresult();
 if(err != grOk)
 {
  printf("graphics error %s ", grapherrormsg(err));
  getch();
  exit(10);
 }
 outtext("All right");
 return 0;
}