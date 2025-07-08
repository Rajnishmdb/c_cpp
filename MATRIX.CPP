#include<iostream.h>
#include<conio.h>
int main()
{
    int i,j,m,n;
    int a[10][10];
     cin>>m;
     cin>>n;
    clrscr();
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
	 cout<<(i+1)<<(j+1)<<" element: ";
	 cin>>a[i][j];
       }
    }
    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {
	 cout<<"\t"<<a[i][j]<<"\t";
       }
       cout<<"\n";
    }
    getch();
    return 0;
}


