# include <iostream>
# include <stdlib.h>
# include <math.h>
using namespace std;
void minAbsSumPair(int arr[], int size){
	int count = 0;
	int min_sum, sum, min1, min2;
	if(size < 2){
		cout << "Invalid Input";
		return;
	}
	min1 = 0;
	min2 = 1;
	min_sum = arr[0] + arr[1];
	
	for(int l = 0; l < size - 1; l++){
		for(int r = l + 1; r < size; r++){
		sum = arr[l] + arr[r];
		if(abs(min_sum) > abs(sum)){
			min_sum = sum;
			min1 = l;
			min2 = r;
		}
		}
	}
		cout<< arr[min1] << " " << arr[min2];
}

int main(){
	int arr[] = {1, 60, -10, 70, -80, 85};
	minAbsSumPair(arr, 6);
	return 0;
}
