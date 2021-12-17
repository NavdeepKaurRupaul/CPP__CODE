#include<iostream>
using namespace std;

bool checkPalindrome(char str[]){
char forward[100000];
char backward[100000];
for(int i=0;str[i]!='\0';i++){
	forward[i]=str[i];
}
int count=0;
	for(int i=0;str[i]!='\0';i++){
		count++;
	}
	int j=0;
for(int i=count-1;i>=0;i--){
	backward[j]=str[i];
	j++;
}
for(int i=0;str[i]!='\0';i++){
	if(forward[i]!=backward[i]){
		return false;
	}
}
	return true;
}

int main(){
  char str[10000];
  cin.getline(str,10000);
  if(checkPalindrome(str)){
  	cout << "true" << endl; 	
  }else{
  cout << "false" << endl;
  }
}


