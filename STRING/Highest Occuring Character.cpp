#include <iostream>
using namespace std;

char highestOccurringChar(char input[]) {
    int frequency[256];
    for(int i=0;i<256;i++){
    	frequency[i]=0;
	}
	for(int i=0;input[i]!='\0';i++){
		int a=input[i];
		frequency[a]++;
	}
	char a= input[0];
	int b=a;
	int count = frequency[b];
	for(int i=1;input[i]!='\0';i++){
		char c =input[i];
		int ascii1= c;
		int count1=frequency[ascii1];
		if(count<count1){
			count=count1;
			a=input[i];
		}
	}
	return a;
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    cout << highestOccurringChar(input) << endl;
}

