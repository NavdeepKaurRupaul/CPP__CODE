#include <iostream>
#include <algorithm>
using namespace std;

/*void SortZeroesAndOne(int arr[], int n){
	int count0=0;
	int count1=0;
for(int i=0;i<n;i++){
	if(arr[i]==0){
		count0++;
	}
	if(arr[i]==1){
		count1++;
	}
}
cout<<count0<<endl;
cout<<count1<<endl;
}*/

#include<bits/stdc++.h>
using namespace std;
void SortZeroesAndOne(int arr[], int n){
  	int end=n-1;
	for(int start=0;start<end;start++){
		if(arr[start]==1){
			while(end>start&&arr[end]==1){
                end--;
            }
            if(arr[end]==0)
                swap(arr[start],arr[end]);
		}
	}
}


int main() {
	int size;
	cin>>size;
	int *input=new int[1+size];		
	for(int i=0;i<size;i++)
		cin>>input[i];	
	SortZeroesAndOne(input,size);		
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";	
	return 0;
}


