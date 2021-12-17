#include<iostream>
#include<climits>
using namespace std;

int FindLargest(int arr[], int n){
	int largest=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>largest){
			largest=arr[i];
		}
	}
    	return largest;
}

int main() {
	int size;
	cin>>size;
	int *input=new int[1+size];		
	for(int i=0;i<size;i++)
		cin>>input[i];	
	cout<<FindLargest(input,size);	
	return 0;

}
