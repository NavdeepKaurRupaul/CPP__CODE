#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n-"<<" ";
	cin>>n;
	int i=1;
	char val='A';
	while(i<=n){
		int j=1;
		while(j<=i){
		cout<<val;
		j=j+1;
		}
		val=val+1;
		cout<<endl;
		i=i+1;
	}
}
