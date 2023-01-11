#include <iostream>
using namespace std;
struct time{
	
	int hours;
	int minutes;
	int seconds;
	
};
int main (){
	time t1,t2,sum;
	long int total_sec;
	char d;
	cout << "Enter time1 in format (12:59:59) : ";
	cin>>t1.hours>>d>>t1.minutes>>d>>t1.seconds;
	cout << "Enter time2 in format (12:59:59) : ";
	cin>>t2.hours>>d>>t2.minutes>>d>>t2.seconds;
	total_sec = t1.hours*3600 + t1.minutes*60 + t1.seconds;
	total_sec += t2.hours*3600 + t2.minutes*60 + t2.seconds;
	cout << "Total seconds are : "<<total_sec<<endl;
	sum.seconds = total_sec%60;
	total_sec -=  total_sec%60;
	
	sum.minutes = total_sec%(60*60);
	sum.minutes/=60;
	total_sec-= total_sec%(60*60);
	
	sum.hours=total_sec/(60*60);
	cout <<"Sum is : "<<sum.hours<<":"<<sum.minutes<<":"<<sum.seconds<<endl;
	return 0;
}
