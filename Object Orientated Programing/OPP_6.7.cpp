#include <iostream>
using namespace std;
class angle{
	int degree;
	float minutes;
	char direction;      //(N,S,E or W)
	public:
	angle (int d,float m,char dir) :degree(d),minutes(m),direction(dir)
	{    }
 void input ()
	{
	cout << "Enter Degree ....: ";cin>>degree;
	cout << "Enter Minutes ...: ";cin>>minutes;
	cout << "Enter Direction .: ";cin>>direction;	
	}
	void output()
	{
		cout <<  "You are at : "<<degree<<'\xF8'<<minutes<<"' "<<direction<<endl;
	}	
	
};


int main()
{
	angle a1(179,59.9,'E');
	a1.output();
	a1.input();
	a1.output();
	
	
	return 0;
}
