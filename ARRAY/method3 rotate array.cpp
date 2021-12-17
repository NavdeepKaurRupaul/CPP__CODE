#include <iostream>
using namespace std;

void Rotate(int arr[], int d, int size) {
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
	temp=0;
	i=0;
	while(i<size-d){
		temp=arr[i];
		arr[i]=arr[size-d];
		arr[d]=temp;
		i++;
		d--;
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

