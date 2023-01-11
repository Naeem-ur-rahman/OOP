#include <iostream>
using namespace std;
struct date{
	int year;
	int mounth;
	int day;
	char d;
};
int main ()
{
	date d1;
	cout << "Enter Date (Day/Mounth/Year) : ";cin>>d1.day>>d1.d>>d1.mounth>>d1.d>>d1.year;
	cout << endl;
	cout << "You Entered ! "<<endl;
	cout<<'\t'<<'\t' << "("<<d1.day<<"/"<<d1.mounth<<"/"<<d1.year<<")"<<endl;
	return 0;
}
