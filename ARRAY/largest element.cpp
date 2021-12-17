#include<iostream>
#include<climits>
using namespace std;

int main() {
	int size;
	cin>>size;
	int *input=new int[1+size];		
	for(int i=0;i<size;i++)
		cin>>input[i];	
		int largest=INT_MIN;
	for(int i=0;i<size;i++){
		if(input[i]>largest){
			largest=input[i];
		}
	}
    	cout<<largest;	
	return 0;
}
