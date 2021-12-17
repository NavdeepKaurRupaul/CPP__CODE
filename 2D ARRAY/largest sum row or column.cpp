#include<iostream>
using namespace std;

void findLargest(int arr[][1000], int row, int col){
int sum_col1=0;
int sum_col2=0;
int column1=0;
int column2;
for(int i=0;i<col;i++){
    sum_col1=0;
	for(int j=0;j<row;j++){
		sum_col1= arr[j][i]+sum_col1;
	}
	if(sum_col1>sum_col2){
		sum_col2=sum_col1;
        column2=i;
	}
}
	
int sum_row1=0;
int sum_row2=0;
int row1=0;
int row2=0;
for(int i=0;i<row;i++){
	sum_row1=0;
	for(int j=0;j<col;j++){
		sum_row1=sum_row1+arr[i][j];
	}
	if(sum_row1>sum_row2){
		sum_row2=sum_row1;
        row2=i;
    }
	}
if(sum_row2>=sum_col2){
	cout<<"row"<<" "<<row2<<" "<<sum_row2;
}
else{
	cout<<"column"<<" "<<column2<<" "<<sum_col2;
}
}

int main() {
    int row, col;
    cin >> row >> col;

    int input[1000][1000]; 
    for(int i = 0; i < row; i++) {
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    findLargest(input, row, col);
}
