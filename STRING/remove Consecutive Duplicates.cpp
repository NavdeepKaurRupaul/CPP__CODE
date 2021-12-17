#include <iostream>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
for (int i=0;input[i]!='\0';i++){
	if(input[i]==input[i+1]){
		for(int j=i+1;input[j]!='\0';j++){
			input[j]=input[j+1];
		}
        i--;
	}
}
}


int main() {
    char input[1000];
    cin.getline(input, 1000);
    removeConsecutiveDuplicates(input);
    cout << input << endl;
}

