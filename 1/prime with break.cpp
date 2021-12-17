#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	bool divided= false;
	for(int i=1;i<n;i=i+1){
		if(n%i==0){
			divided=true;
			break;
		}
		if(divided){
			cout<<"NOT A PRIME NUMBER"<<endl;
		}
		else{
			cout<<"PRIME NUMBER";
		}
	}
}
