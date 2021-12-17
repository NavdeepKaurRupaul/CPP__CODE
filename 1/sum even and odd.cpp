#include<iostream>
using namespace std;
int main(){
	int a,se=0,so=0,i;
	cout<<"enter a number"<<endl;
	cin>>a;
	while(a>0){
		i=a%10;
		if(i%2==0){
		se=se+i;
		}
		else{
			so=so+i;
		}
		a=a/10;
	}
	cout<<se<<"   ";
	cout<<so;
	}
