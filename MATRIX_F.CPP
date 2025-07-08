#include<iostream.h>
#include<conio.h>
void matrix();
int main()
{
   clrscr();
   cout<<"MATRIX:\n";
   matrix();
   getch();
   return 0;
}
void matrix()
{
   int i,j,p[10][10],m,n;
   cout<<"Enter the size of matrix(m x n)"<<endl;
   cout<<"m = ";
   cin>>m;
   cout<<"n = ";
   cin>>n;

   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
	cout<<(i+1)<<(j+1)<<" element: ";
	cin>>p[i][j];
      }
   }
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
	cout<<"\t"<<p[i][j]<<" \t";
      }
      cout<<"\n";
   }
   return ;
}
