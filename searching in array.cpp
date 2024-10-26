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
	cout<<"Enter element you want to be search:"<<endl;
	cin>>x;
	for( i=0;i<n;i++){
		if(arr[i]==x){
			cout<<"Element found at index:"<<i;
		}}
		if(i==n){
			cout<<"Element not found in array";
			break;
		}
		return 0;
	}
		