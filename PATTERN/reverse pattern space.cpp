#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n"<<endl;
cin>>n;
int i=1;
while(i<=n){
	int k=1;
	while(k<i){
	cout<<" ";
	k=k+1;	
	}
	int j=n-1;
	while(j<=i){
		cout<<"*";
		j=j-1;
	}
	cout<<endl;
	i=i+1;
}
}
