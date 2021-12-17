#include<iostream>
using namespace std;
void sumOfTwoArrays(int input1[], int size1, int input2[], int size2, int output[]){
    int max=0;
    if(size1>size2){
        max=size1;
    }
    else{
        max=size2;
    }
    int i=size1-1;
    int j=size2-1;
    int sum_num=0;
    int store_num=0;
    int carry=0;
    int k = max;
    
    //for(int k=max-1;k>=0;k--){
    while(i>=0 && j>=0){
        sum_num=input1[i]+input2[j]+carry;
        carry=sum_num/10;
        store_num=sum_num%10;
        output[k]=store_num;
        i--;
        j--;
        k--;
    }
    for(;i>=0;i--){
        sum_num=input1[i]+carry;
        carry=sum_num/10;
        store_num=sum_num%10;
        output[k]=store_num;
        //i--;
        k--;
    }
    for(;j>=0;j--){
        sum_num=input2[j]+carry;
        carry=sum_num/10;
        store_num=sum_num%10;
        output[k]=store_num;
        //j--;
        k--;
        //}
    }
    if(carry!=0)
        output[0] = carry;
    else
        output[0] = 0;
}
int main(){
	int size1,size2;
	cin>>size1;
	int * input1=new int[1+size1];
	for(int i=0;i<size1;i++)
		cin>>input1[i];
   	 cin>>size2;
	 int * input2=new int[1+size2];
	for(int i=0;i<size2;i++)
		cin>>input2[i];
	int *output=new int[1+max(size1,size2)];
	int outsize = 1+max(size1,size2);
	sumOfTwoArrays(input1,size1,input2,size2,output);	
	for(int i=0;i<outsize;i++)
		cout<<output[i]<<" ";
}

