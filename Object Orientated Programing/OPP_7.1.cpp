#include <iostream>
#include <cstring>
using namespace std;
void reversit(char[]);
int main ()
{
	int m=80;
	char str[m];
	cout <<"Enter String : ";cin.get(str,m);
	reversit(str);
	cout <<endl;
	cout << "Ater reverse String is : "<<str;
	return 0;
}
void reversit(char A[]){
	int s=strlen(A);
	for (int j=0;j<=s/2;j++)
	{
		int t=A[j];
		A[j]=A[s-j-1];
		A[s-j-1]=t;
	}
}
