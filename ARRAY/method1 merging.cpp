#include<iostream>
using namespace std;
void merge(int arr1[], int size1, int arr2[], int size2, int ans[]){
	int arr3[100];
for(int i=0;i<size1;i++){
	arr3[i]=arr1[i];
}
for(int k=0;k<size1;k++){
	cout<<arr3[k]<" ";
for(int j=0;j<size1+size2;j++){
	arr3[size1+j]=arr2[j];
}
for(int k=0;k<size1+size2;k++){
	cout<<arr3[k]<" ";
}
}
}
int main(){
	 int size1;  
  cin >> size1;
  int* arr1 = new int[size1];
  for(int i = 0; i < size1; i++){
    cin >> arr1[i];
  } 
  int size2;  
  cin >> size2;
  int* arr2 = new int[size2];
  for(int i = 0; i < size2; i++){
    cin >> arr2[i];
  } 	
  int* ans = new int[size1 + size2];	
  merge(arr1, size1, arr2, size2, ans);
  //for(int i = 0; i < size1 + size2; i++){
//			cout << ans[i] <<  " ";
//		}
  //delete arr1;
  //delete arr2;
 // delete ans;
}

