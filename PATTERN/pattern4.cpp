#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n- ";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=1;
		int val=n;
		while(j<=n ){	
		cout<<val;
		//cout<<n-j+1;
		val=val-1;
		j=j+1;
		}
		cout<<endl;
		i=i+1;
		}
	}
