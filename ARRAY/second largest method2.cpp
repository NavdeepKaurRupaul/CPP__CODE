#include<iostream>
#include<climits>
using namespace std;

int FindSecondLargest(int arr[], int n){
int firstlargest=INT_MIN;
for(int i=0;i<n;i++){
	if(arr[i]>firstlargest){
		firstlargest=arr[i];
	}
}
int secondlargest=INT_MIN;
for(int i=0;i<n;i++){
	if(arr[i]>secondlargest && arr[i] != firstlargest){
		secondlargest=arr[i];
	}
	else{
		return INT_MIN;
	}
}
return secondlargest;
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
