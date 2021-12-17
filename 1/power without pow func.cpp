#include<iostream>
using namespace std;
int main(){
	int base, exponent;
	cout<<"enter base and exponent"<<endl;
	cin>>base>>exponent;
	int result=1;
	while(exponent!=0){
		result=result*base;
	}
	cout<<result;
}
