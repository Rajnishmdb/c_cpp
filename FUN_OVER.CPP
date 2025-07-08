#include<iostream.h>
#include<conio.h>
#include<math.h>
int area(int l,int b);
float area(float r);
int main()
{
   int a,b;
   float c;
   clrscr();
   cout<<"Enter the base of triangle: ";
   cin>>a;
   cout<<" and Enter the highpotenous of trianle: ";
   cin>>b;
   cout<<"Enter the radius of circle: ";
   cin>>c;
   area(a,b);
   area(c);
   getch();
   return 0;
}
int area(int x,int y)
{
   float z,d=0.5;
   z = d * x * y;
   cout<<"RESULT = "<<z<<endl;
   return(z);
}
float area(float u)
{
   float w,v=3.14;
   w = v * u * u;
   cout<<"RESULT = "<<w<<endl;
   return(w);
}


