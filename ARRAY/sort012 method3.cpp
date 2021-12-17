#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort012(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    int mid_num = 0;
    while (mid_num <= j)
    {
        switch (arr[mid_num])
        {
        case 0:
            swap(&arr[i++], &arr[mid_num++]);
            break;
        case 1:
            mid_num++;
            break;
        case 2:
            swap(&arr[mid_num], &arr[j--]);
            break;
        }
    }
}
int main() {
	int size_first;
	cin>>size_first;
	int *arr_first=new int[1+size_first];	
	for(int i=0;i<size_first;i++)
		cin>>arr_first[i];
	sort012(arr_first,size_first);		
	for(int i=0;i<size_first;i++)
		cout<<arr_first[i]<<" ";	
	return 0;
}

