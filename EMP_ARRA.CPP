		    /*Array of structure in cpp*/
#include<iostream.h>
#include<conio.h>
struct employee
{
    char name[10];
    int id;
    float salary;
};
int main()
{
    struct employee emp[2];
    int i;
    clrscr();
    for(i = 0;i <=1;++i)
    {
	cout<<"Enter the empolyee_name "<<i+1<<"\n";
	cin>>emp[i].name;
	cout<<"Enter the employee_id "<<i+1<<"\n";
	cin>>emp[i].id;
	cout<<"Enter the employee_salary "<<i+1<<"\n";
	cin>>emp[i].salary;
    }
    for(i=0;i<=1;++i)
    {
	cout<<"\t Name "<<emp[i].name<<"\n";
	cout<<"\t Id "<<emp[i].id<<"\n";
	cout<<"\t Salary "<<emp[i].salary<<"\n\n";
    }
    getch();
    return 0;
}