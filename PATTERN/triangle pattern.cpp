#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter a number"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
	for(int k=1;k<=n-i;k++){
		cout<<" ";
	}
	int val=i;
	for(int j=1;j<=i;j++){
		cout<<val;
		val++;
	}
for(int l=i-1;l>=1;l--){
		cout<<l+i-1;
	}
	cout<<endl;
}
}



