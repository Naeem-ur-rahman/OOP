#include <iostream>
#include <iomanip>
using namespace std;
struct employee{
	int num;
	float dollar;
};
void input(employee &x)
{
	cout<< "Enter Employee Number   : ";cin>>x.num;
	cout<< "Enter compensation in $ : ";cin>>x.dollar;
}
void display(employee &y)
{
	cout<<setw(20)<<setiosflags(ios::left)<< y.num<<setw(30)<<setiosflags(ios::left)<<y.dollar<<endl;
	
}
void line ()
{
	for (int a=1;a<=40;a++)
	{  cout <<"-";	}
	cout<<endl;
}
int main ()
{
	employee a,b,c;
	input (a);
	input (b);
	input (c);
	cout <<endl;
	line();
    cout<<setw(20)<<setiosflags(ios::left)<< "Employee Number "<<setw(30)<<setiosflags(ios::left)<<"Employee Compenstion"<<endl;
    line ();
    display(a);
    display(b);
    display(c);
    line();
    return 0;
}
