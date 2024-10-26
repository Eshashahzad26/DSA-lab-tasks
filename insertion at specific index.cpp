#include<iostream>
using namespace std;
int main(){
	int max_size=10;
	int arr[max_size],n,x,pos;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	if((n<=0)||(n>=max_size)){
		cout<<"Array out of bounds"<<endl;
		return 0;
	}
	cout<<"Enter array elements:"<<endl;
	for( int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"Enter insertion loc:"<<endl;
	cin>>pos;
	cout<<"Enter value to insert:"<<endl;
	cin>>x;
	for(int i=n-1;i>=pos;i--){
		arr[i+1]=arr[i];
	}
	arr[pos]=x;
	n++;
	cout<<"Array elements after isertion:"<<endl;
	for( int i=0;i<n;i++){
		cout<<arr[i]<<endl;
		
	}}