#include<iostream>
using namespace std;
void printPatt(int n){
int n1=(n+1)/2;
int n2=n/2;
for(int i=1;i<=n1;i++){
	for (int k=1;k<=n1-i;k++){
		cout<<" ";
	}
	for(int j=1;j<=2*i-1;j++){
		cout<<"*";
	}
	cout<<endl;
}
for(int i=n2;i>=1;i--){
	for(int k=1;k<=n2-i+1;k++){
		cout<<" ";
	}
	for(int j=1;j<=2*i-1;j++){
		cout<<"*";
	}
	cout<<endl;
}
}

int main()
{
	int n;
	cin>>n;
	printPatt(n);
	return 0;
}

