#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int val){	
	int mid;
	int start=0;
	int end=n-1;
	mid= (start+end)/2;
	if(arr[mid]==val){
		cout<<mid;
	}
	else{
		if(start>=0 || end<=n-1){
			if(arr[mid]>val){
				int start1=start;
				int end1=mid-1;
				int mid1=(start1+end1)/2;
				if(arr[mid]==val){
					return mid1;
				}
					else{
						return -1;
					}
				}
			}
		}
}

int main() {	
	int size,val;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin>>val;
	cout<<BinarySearch(input,size,val);
	return 0;
}


