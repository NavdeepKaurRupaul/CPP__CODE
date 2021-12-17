#include<iostream>
using namespace std;
void sort012(int arr[], int n)  { 
int temp[1000];
int j=n-1;
int i;
for(i=0;i<n;i++){
	if(arr[i]==0){
		temp[i]=0;
	}
	else if(arr[i]==2){
		temp[j]=2;
		j--;
	}
}
int k=i;
while(k<j){
	temp[k]=1;
}
for(int i=0;i<n;i++){
	arr[i]=temp[i];
}
}
int main() {

	int size_first;

	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	
	sort012(arr_first,size_first);
		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}

