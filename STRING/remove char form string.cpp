#include <iostream>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {
	for(int i=0;input[i]!='\0';i++){
		if(input[i]==c){
			for(int j=i;input[j]!='\0';j++){
				input[j]=input[j+1];
			}
			i--;
		}
	}
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(input, c);
    cout << input << endl;
}

