#include<iostream>
using namespace std;
int length(char input[]){
	int count=0;
	for(int i=0;input[i]!='\0';i++){
		count++;
	}
	return count;
}
void reverseString(char input[]){
	int i=0;
	int len=length(input);
	int j=len-1;
	while(i<j){
		char temp=input[i];
		input[i]=input[j];
		input[j]=temp;
		i++;
		j--;
	}
}
int main(){
	char string[100];
	cout<<"enter string"<<endl;
	cin.getline(string,12);
	reverseString(string);
	cout<<string<<endl;
}
