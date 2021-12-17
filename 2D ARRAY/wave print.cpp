#include <iostream>
using namespace std;

void wavePrint(int input[][1000], int row, int col){
for(int i=0;i<col;i++){
	if(col%2==0){
		for(int j=0;j<row;j++){
			cout<<input[j][i]<<" ";
		}
		cout<<endl;
	}
	else{
		for(int j=row-1;j>=0;j--){
			cout<<input[j][i]<<" ";
		}
		cout<<endl;
	}
}
}


int main() {
    int input[1500][1000];
    int row, col;
    cin >> row >> col;
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    wavePrint(input, row, col);
}
