#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
	int temp=0;
	int i=0;
	int j=size-1;
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
}

int main() {
	int size;
	int d;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++)
		cin>>input[i];
	cin >> d;
    reverse(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}

