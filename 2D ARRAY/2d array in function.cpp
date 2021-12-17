#include<iostream>
using namespace std;
void printArray(int arr[][100],int m,int n){
		for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
}
#include<iostream>
using namespace std;
int main(){
	int array[100][100];
	int m,n;
	cout<<"enter number of rows and column"<<endl;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>array[i][j];
		}
	}
	cout<<"Column wise"<<endl;
    printArray(array,m,n);
}
