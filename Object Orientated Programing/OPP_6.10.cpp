#include <iostream>
using namespace std;
class ship{
	int number;
	static int count;
	int degree;
	float minutes;
	char position;
	public:
		ship()
		{
		count++;
		number=count;	
		}
		void input()
		{   cout << "Enter Position of a Ship !"<<endl;
			cout << "Enter Degree ----->: ";cin>>degree;
			cout << "Enter Minutes ---->: ";cin>>minutes;
			cout << "Enter Direction -->: ";cin>>position;
		}
		void output()
		{
			cout << "Ship with Serial Number : "<<number<<" is at position "<<degree<<'\xF8'<<minutes<<"' "<<position<<endl;
		}
};
int ship::count=0;
int main()
{
	ship a1,a2,a3;
	a1.input();
	a2.input();
	a3.input();
	a1.output();
	a2.output();
	a3.output();
	
	return 0;
}
