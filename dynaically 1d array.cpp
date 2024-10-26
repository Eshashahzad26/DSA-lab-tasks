#include<iostream>
using namespace std;
int main(){
	int size;
	int *a;
	cout<<"Enter size of array:";
	cin>>size;
	cout<<endl;
	a=new int[size];
		cout<<"Enter a num:";
	for(int i=0;i<size;i++ ){
		cin>>a[i];
	}
	cout<<"you have entered:";
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	delete[]a;
	return 0;}