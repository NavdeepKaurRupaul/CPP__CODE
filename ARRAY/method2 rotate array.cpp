#include <iostream>
using namespace std;

void Rotate(int arr[], int d, int size) {
	int copyarr[10000000];
for(int i=0;i<d;i++){
    copyarr[i]=arr[i];
}
for(int i=0; i<size;i++){
	arr[i]=arr[i+d];
}
int j=0;
for(int i=size-d;i<size;i++){
	arr[i]=copyarr[j];
	j++;
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

