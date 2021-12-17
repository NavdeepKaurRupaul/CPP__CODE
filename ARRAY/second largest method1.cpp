#include<iostream>
#include<climits>
using namespace std;

int FindSecondLargest(int arr[], int n){
	int a = INT_MIN;
	int b= INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>a){
			b=a;
			a=arr[i];
		}
		else if(arr[i]>b && arr[i]!=a){
			b=arr[i];
		}
	}
		if(b==INT_MIN){
			return INT_MIN;}
			else {
			return b;
			}
}

int main() {
	int size;
	cin>>size;
	int *input=new int[1+size];		
	for(int i=0;i<size;i++)
		cin>>input[i];	
	cout<<FindSecondLargest(input,size);	
	return 0;
}
