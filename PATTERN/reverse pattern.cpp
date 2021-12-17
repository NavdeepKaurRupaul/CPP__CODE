#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter n"<<endl;
cin>>n;
int i=1;
while(i<=n){
	int j=n;
	while(j>=i){
		cout<<"*";
		j=j-1;
	}
	cout<<endl;
	i=i+1;
}
}
