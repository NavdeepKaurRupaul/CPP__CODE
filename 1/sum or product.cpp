#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int c;
	cin>>c;
	if(c==1){
		int i=2;
		int a=1;
		while(i<=n){
			int c=a+i;
			a=c;
			i=i+1;
		}
		cout<<a;
	}
	else if(c==2){
		int j=2;
		int b=1;
		while(j<=n){
			int d= b*j;
			b=d;
			j=j+1;
		}
		cout<<b<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
}
