#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char input1[100]="Navdeep";
	
	//length of string
	int length=strlen(input1);
	cout<<"length is:"<<length<<endl;
	cout<<endl;
	
	//copy one string in other string
	char input2[100];
	strcpy(input2,input1);
	cout<<"copied input2 is:"<<input2<<endl;
	cout<<endl;
	
	//copy one string in other upto n characters
	char input3[100];
	strncpy(input3,input1,3);
	cout<<"copied input2 upto 3 charaters is:"<<input3<<endl;
	cout<<endl;
	
	//compare two strings
	if(strcmp(input1,input2)==0){
		cout<<"same strings"<<endl;
	}
	else{
		cout<<"not same strings"<<endl;
	}
	if(strcmp(input1,input3)==0){
		cout<<"same strings"<<endl;
	}
	else{
		cout<<"not same strings"<<endl;
	}
}
