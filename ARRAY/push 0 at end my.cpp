#include<iostream>
using namespace std;
void PushZeroesEnd(int arr[], int n){
    int j;
  for(int i=0;i<n;i++){
  	if(arr[i]==0){
  		for(int j=i;j<n;j++){
  			arr[j]=arr[j+1];
		  }
	  }
  }
  for(int k=j;k<n;k++){
  	arr[k]=0;
  }  
}

/*OR
void PushZeroesEnd(int A[], int n)
{
	int k = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] != 0)
			A[k++] = A[i];
	}
	for (int i = k; i < n; i++)
		A[i] = 0;
}*/

int main() {
	int size;
	cin>>size;
	int *input=new int[1+size];	
	for(int i=0;i<size;i++)
		cin>>input[i];
	PushZeroesEnd(input,size);
	for(int i=0;i<size;i++)
		cout<<input[i]<<" ";
	return 0;
}

