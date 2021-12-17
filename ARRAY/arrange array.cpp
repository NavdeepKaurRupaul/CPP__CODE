#include<iostream>
using namespace std;
void arrange(int arr[],int n){
    int val1=1;
	for(int i=0;i<=(n-1)/2;i++){
		arr[i]=val1;
		val1=val1+2;
		}
    int val2=2;
	for (int i=n-1;i>(n-1)/2;i--){
	
		arr[i]=val2;
		val2=val2+2;
		}  
}
/*void arrange(int arr[],int n){
	for(int i=0;i<n;i++){
		int val=1;
		int start=0;
		int end=n-1;
		arr[start]=val;
		val++;
		arr[end]=val;
		val++;
		start++;
		end--;
	}
}*/

int main(){
  int n;  
  cin >> n;
  int* arr = new int[n];
  arrange(arr,n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  delete arr;
}



