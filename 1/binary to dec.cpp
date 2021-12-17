#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"enter n"<<endl;
	cin>>n;
	int i;
	int decimal=0;
	int b=1;
	while(n>0){
		i=n;
		int a;
		a=i%10;
		decimal=decimal+a*b;
		b=b*2;
		i=i/10;
        n=n/10;
	}
	cout<<decimal;
}
