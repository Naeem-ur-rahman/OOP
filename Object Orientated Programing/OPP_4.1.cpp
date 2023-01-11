#include <iostream>
using namespace std;
struct phone{
	char code[5];
	char exchange[6];
	int number;
	
};
int main (){
	
	phone you;
    phone me = {"+92","321",1610373};
	cout << "Enter code : ";cin>>you.code;
	cout << "Enter exchange : ";cin>>you.exchange;
	cout << "Enter number : ";cin>>you.number;
	
	cout <<endl;
	cout <<"My Number is   : (" << me.code <<") "<<me.exchange<<"-"<<me.number<<endl;
	cout <<"Your Number is : (" << you.code <<") "<<you.exchange<<"-"<<you.number<<endl; 
	return 0;
}
