#include<iostream>
using namespace std;
int main(){
	int a=10;
	cout<<++a<<endl; //a=10+1=11 nd print 11
	
	cout<<a++<<endl; //11 print and a=12
	
	cout<<--a<<endl; //a=12-1=11 print 11
		
	cout<<a--<<endl; // print 11 and a=11-1=10
	
	int b=a+=4;
	cout <<b<<endl;
}
