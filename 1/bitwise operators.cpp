#include<iostream>
using namespace std;
int main(){
	int a=2;
	int b=3;
	int c=a&b;
	cout<<"bitwise and is="<<c<<endl;
	int d=a|b;
	cout<<"bitwise or is="<<d<<endl;
	int e=~a;
	cout<<"bitwise not is="<<e<<endl;
	int h=a^b;
	cout<<"bitwise XOR is="<<h<<endl;
	int f=a<<1;
	cout<<"left shift by 1 is="<<f<<endl;
	int g=a>>1;
	cout<<"right shift by 1 is="<<g<<endl;
}
