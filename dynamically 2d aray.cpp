#include<iostream>
using namespace std;
int main(){
	int r,c;
	cout<<"Enter rows:";
	cin>>r;
	cout<<"Enter col:";
	cin>>c;
	int**a=new int *[r];
	for(int i=0;i<r;i++){
		a[i]=new int [c];
	}
	for (int i=0;i<r;i++){
		for (int j=0;j<c;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl;
	cout<<"You have entered";
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;}
		for(int i=0;i<r;i++){
		
		delete[]a[i];
	}
	delete[]a;}