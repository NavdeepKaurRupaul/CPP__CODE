#include<iostream>
using namespace std;

void sort012(int arr[], int n)  {  
int count0=0;
int count1=0;
int count2=0;
 for(int i=0;i<n;i++){
    if(arr[i]==0){
    	count0++;
	}
	else if(arr[i]==1){
		count1++;
	}
    else{
    	count2++;
	}
	for(int i=0;i<count0;i++){
		arr[i]=0;
	}
	for(int i=count0;i<count0+count1;i++){
		arr[i]=1;
	}
	for(int i=count1+count0;i<count0+count1+count2;i++){
		arr[i]=2;
	}
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

