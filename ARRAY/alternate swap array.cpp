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
	int j=1;
	while(j<n){
		int temp=b[i];
		b[i]=b[j];
		b[j]=temp;
		i=i+2;
		j=j+2;
	}
}
int main(){
	int b[10]={9 ,3, 6, 12, 4 , 32};
	printArray(b,6);
	swap(b,6);
	cout<<"swaped array is:"<<" ";
	printArray(b,6);
}
