#include <iostream> 
using namespace std; 
  
void printRLE(char input[]) 
{ 
    //int n = str.length(); 
    for (int i = 0; i < input[i]!='\0'; i++) { 
        int count = 1; 
        while (i < input[i]!='\0' && input[i] == input[i + 1]) { 
            count++; 
            i++; 
        } 
        if(count>1){
        cout << input[i] << count; 
    }
    else{
    	cout<<input[i];
	}
    } 
} 
  
int main() 
{ 
    char str[] = "aaabbccdsa"; 
    printRLE(str); 
    return 0; 
}
