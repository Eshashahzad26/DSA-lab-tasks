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
	for(i=0;i<n;i++){
		arr[i]=arr[i+1];
		
	}
	n--;
	cout<<"Array after deletion:"<<endl;
	for(i=0;i<n;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}