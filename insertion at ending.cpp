#include<iostream>
using namespace std;
int main(){
	int arr[10],n,x,i;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for( i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"Enter element you want to insert at end of index:"<<endl;
	cin>>x;
	arr[i]=x;
	n++;
cout<<"now array elements are:"<<endl;
	for( i=0;i<n;i++){
		cout<<arr[i]<<endl;}
	}