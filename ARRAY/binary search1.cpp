#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int val){
    int start = 0;
    int end = n - 1;
    int mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (val== arr[mid]){
            return mid;
        }
        else if (val < arr[mid]){
            end = mid - 1;
        }
        else {
		start = mid + 1;
	}
    }
    return -1;
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
