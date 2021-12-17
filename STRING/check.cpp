#include<iostream>
using namespace std;
int main(){
	char str[100];
	cout<<"Enter your name : ";
	cin>>str;
	cout<<"Name : "<<str<<endl;
	char forward[100];
char backward[100];
/*for(int i=0;str[i]!='\0';i++){
	forward[i]=str[i];
}*/
int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	cout<<count<<endl;
	//cout<<forward<<endl;
	int j=0;
for(int i=count-1;i>=0;i--){
	backward[j]=str[i];
	j++;
}
cout<<backward;
}
