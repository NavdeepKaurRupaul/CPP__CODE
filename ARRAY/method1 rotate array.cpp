#include <iostream>
using namespace std;

void Rotate(int arr[], int d, int size) {
for(int i=1;i<=d;i++){
		int temp=arr[0];
		for(int k=0;k<size;k++){
		arr[k]=arr[k+1];
	}
	arr[size-1]=temp;
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
    Rotate(input,d,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;

}

