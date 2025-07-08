#include<iostream.h>
#include<conio.h>
int main()
{
  int i,n,j,k,num=0;
  clrscr();
  cout<<"Enter the value of n: ";
  cin>>n;
  cout<<"Prime numbers between 1 and "<<n<<" are:"<<"\n";
  for(i=1;i<n;i++)
  {
     k=0;
     for(j=1;j<=i;j++)
     {
	if(i%j==0)
	  k++;
     }
     if(k==2)
     {
       num++;
       cout<<"\t"<<i;
     }
  }
  getch();
  return 0;
}
