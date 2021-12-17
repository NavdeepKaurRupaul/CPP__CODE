#include<iostream>
using namespace std;
int main(){
	char string[100];
	cout<<"enter string"<<endl;
	cin>>string;
	//cout<<string<<endl;
	//cin.getline(string,12);
    //cout<<string<<endl;
	//cin.getline(string,12,'o');
	//cout<<string<<endl;
	cin.getline(string,8);
	cout<<string;
}


