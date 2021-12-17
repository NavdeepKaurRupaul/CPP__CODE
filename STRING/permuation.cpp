#include <iostream>
#include<cstring>
using namespace std;

#include<cstring>
bool isPermutation(char input1[], char input2[]) {
 int length1=strlen(input1);
 int length2=strlen(input2);
 if(length1==length2){
 	int frequency[256];
     for(int i=0;i<256;i++){
         frequency[i]=0;
     }
 	for(int i=0; input1[i]!='\0';i++){
 		int a= input1[i];
 		frequency[a]++;
	 }
	 for(int j=0;input2[j]!='\0';j++){
	 	int b=input2[j];
	 	frequency[b]--;
	 }
	 for(int i=0;i<256;i++){
	 	if(frequency[i]!=0){
	 		return false;
		 }
	 }
	 return true;
 }
 else{
 	return false;
 }
}

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

