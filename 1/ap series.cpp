#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"enter n"<<endl;
	cin>>n;
	int i=1;
	int a;
	if(n!=0){
        while(n!=0){
		a=3*i+2;
		if(a%4==0){
			//n=n-1;
            i=i+1;
			continue;
		}
			cout<<a<<" ";
            n=n-1;
			i=i+1;
    }
	}
}
