#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n-";
	cin>>n;
	int a=0,b=1;
	int c;
	if(n==0){
		cout<<a;
	}
	else{
		for(int i=1;i<=n;i=i+1){
			c=a+b;
			a=b;
			b=c;
		}
		cout<<a;
	}
}
