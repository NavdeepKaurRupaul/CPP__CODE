#include<iostream>
using namespace std;

void printSubstrings(char str[]){
int i=0;
int j=0;
while(str[i]!='\0'){
	for(j=i;str[j]!='\0';j++){
		for(int k=i;k<=j;k++){
			cout<<str[k];
		}
		cout<<endl;
	}
	i++;
}
}
int main(){
  char str[10000];
  cin.getline(str,10000);
  printSubstrings(str);
}


