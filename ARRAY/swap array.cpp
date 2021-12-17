#include<iostream>
using namespace std;
void printArray(int b[], int n){
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl;
}
void swap(int b[], int n){
	int i=0;
	int j=n-1;
	while(i<j){
		int temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		i++;
		j--;
	}
}
int main(){
	int b[10]={1,2,3,4,5};
	printArray(b,5);
	swap(b,5);
	cout<<"swaped array is:"<<" ";
	printArray(b,5);
}
