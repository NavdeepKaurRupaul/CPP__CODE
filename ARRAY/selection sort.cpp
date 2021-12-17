#include<iostream>
using namespace std;

void selectionSort(int input[],int n){
	for(int i=0;i<n-1;i++){
		int min=input[i];
		int minIndex=i;
		for(int j=i;j<n;j++){
			if(input[j]<min){
				min=input[j];
				minIndex=j;
			}
		}
		int temp=input[i];
		input[i]=min;
		input[minIndex]=temp;
	}
}

int main(){
	int input[]={1,2,0,5,4,3,8};
	for(int i=0;i<7;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
	selectionSort(input,7);
	for(int i=0;i<7;i++){
		cout<<input[i]<<" ";
	}
	cout<<endl;
}
