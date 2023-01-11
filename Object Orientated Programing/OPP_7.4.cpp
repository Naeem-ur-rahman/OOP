#include <iostream>
using namespace std;
int main (){
	int maxint(int[],int);
	int a;
	int arr[a];
	cout << "Enter the Numner of Inputs : ";cin>>a;
	for (int i=0;i<a;i++){
		cout <<i+1<< " Enter : ";cin >>arr[i];
	}
	maxint(arr,a);
	cout << "Maximum number is : "<<arr[maxint(arr,a)]<<" at Index : "<<maxint(arr,a)<<endl;
	
	return 0;
}
int maxint(int a[],int b){
	int max=a[0];
	int i=0;
	for(int j=1;j<b;j++){
		if (max<a[j]){
			max=a[j];
			i=j;
		}
	}
	return i;
}
