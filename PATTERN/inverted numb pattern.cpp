#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int val=n;
	for(int i=1;i<=n;i++){
		for(int j=n-i+1;j>0;j--){
			cout<<val;
		}
		val--;
		cout<<endl;
	}
}
