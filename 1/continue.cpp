#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i=1;i<n;i++){
		if(i==7){
			i=i+1;
			continue;
				}
		cout<<i<<endl;
	}
}
