#include<iostream>
using namespace std;
void printArray(int intput[],int n){
	for(int i=0;i<n;i++){
		cout<<intput[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int intput[100]={1,2,3};
	printArray(intput,100);
}
