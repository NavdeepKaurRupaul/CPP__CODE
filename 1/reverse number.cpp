#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int a;
	int reverse=0;
	while(n!=0){
		a=n%10;
		reverse=reverse*10+a;
		n=n/10;
	}
	cout<<reverse;
}
