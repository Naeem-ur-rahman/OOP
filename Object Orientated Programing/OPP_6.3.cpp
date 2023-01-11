#include <iostream>
using namespace std;
class time{
	int hours;
	int minutes;
	int seconds;
	public :
		time () : hours(0),minutes(0),seconds(0)
		{	}
	time (int h,int m,int s):hours(h),minutes(m),seconds(s)
	{   }
	void display()
	{
		cout <<"hrs:min:sec = ("<<hours<<":"<<minutes<<":"<<seconds<<")"<<endl;
	}
	void add_time(time a,time b)
	{
		hours=a.hours+b.hours;
		minutes=a.minutes+b.minutes;
		seconds=a.seconds+b.seconds;
		if (seconds>59)
		{
			seconds=seconds-60;
			++minutes;
		}
			if (minutes>59)
		{
			minutes=minutes-60;
			++hours;
		}
	}
};
int main ()
{
	time t1(5,10,40);
	time t2(5,55,30);
    cout << "Time  1 # ";t1.display();
	cout << "Time  2 # ";t2.display();
	time t3;
	t3.add_time(t1,t2);
	cout << "Time  3 # ";t3.display();
	return 0;
}
