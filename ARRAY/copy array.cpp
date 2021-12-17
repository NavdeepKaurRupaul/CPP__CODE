#include<iostream>
using namespace std;
void BubbleSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
	for(int j=0;j<n-i-1;j++){
		if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
}
int main(){
	int arr1[100];
	int n1;
	int copyarr[100];
	cout<<"array 1 size"<<endl;
	cin>>n1;
 cout<<" enter arr1"<<endl;
 for(int i=0;i<n1;i++)
 {
 cin>>arr1[i];
 }
	copyarr[100];
	for(int i=0;i<5;i++){
		copyarr[i]=arr1[i];
	}
	for(int i=0;i<n1;i++){
		cout<<copyarr[i]<<" ";
	}
	cout<<endl;
	
	int n2;
	cout<<"array 2 size"<<endl;
	cin>>n2;
	int arr2[100];
 cout<<" enter arr2"<<endl;
 for(int i=0;i<n2;i++)
 {
 cin>>arr2[i];
 }
 for(int i=0;i<n2;i++){
 	copyarr[n1+i]=arr2[i];
 }
 for(int i=0;i<n1+n2;i++){
		cout<<copyarr[i]<<" ";
	}
BubbleSort(copyarr,n1+n2);	
}


