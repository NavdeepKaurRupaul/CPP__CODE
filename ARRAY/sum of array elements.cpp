#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"enter array lenght"<<endl;
	cin>>n;
	int array[100];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
//	cout<<"Array is:";
//	for(int i=0;i<n;i++){
//		cout<<array[i]<<" ";
//	}
	cout<<endl;
	int sum=0;
	for(int i=0;i<n;i++){
		sum=array[i]+sum;
	}
	cout<<sum;
}
