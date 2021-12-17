#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"enter decimal number"<<endl;
	cin>>n;
	long long b=1;
	long long binary=0;
	while(n>0){
		int i;
		i=n%2;
		binary=binary+i*b;
		n=n/2;
		b=b*10;
	}
	cout<<binary;
}
