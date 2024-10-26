#include<iostream>
using namespace std;
int main(){
	int arr[10],n,x;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	cout<<"Enter array elements:"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"Enter element you want to insert at beginning of index:"<<endl;
	cin>>x;
	for(int i=n;i>0;i--){
		arr[i]=arr[i-1];}
		arr[0]=x;
		n++;
		cout<<"array elements are:";
		for(int i=0;i<n;i++){
		cout<<arr[i]<<endl;	
	}
}