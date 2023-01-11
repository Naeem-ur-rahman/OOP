#include <iostream>
using namespace std;
class member{
	static int count;
	int serial_number;
	public:
	member() 
	{
		count++;
		serial_number=count;
	}
	void output()
	{
		cout << "I am Object number : "<<serial_number<<" so on "<<endl;
	}
};
int member:: count=0;
int main()
{
	member a1,a2,a3;
	a1.output();
	a2.output();
	a3.output();
	
	return 0;
}
