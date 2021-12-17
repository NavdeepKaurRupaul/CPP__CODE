#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cout<<"enter lenght of array";
	cin>>n;
	int array[100];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	cout<<"ARRAY IS:";
	for(int i=0;i<n;i++){
		cout<<array[i]<<" ";
	}
	cout<<endl;
	int max= INT_MIN;
	for(int i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];
		}
		i=i+1;
	}
	cout<<"largest element of array is:"<<max<<endl;
}

