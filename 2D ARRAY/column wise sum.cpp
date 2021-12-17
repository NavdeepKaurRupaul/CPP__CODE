#include<iostream>
using namespace std;
int main(){
	int array[1000][1000];
	int m,n;
	//cout<<"enter number of rows and column"<<endl;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	int sum;
	for(int i=0;i<n;i++){
		//sum=0;
		for(int j=0;j<m;j++){
			sum=array[j][i]+sum;
		}
		cout<<sum<<" ";
		sum=0;
	}
}
