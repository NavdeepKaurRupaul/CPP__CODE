#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n-";
	cin>>n;
   int i=1;
    while(i<=n){
        int j=1;
        char ch='A'+n-i;
        while(j<=i){
            //ch=ch+i-1;
            cout<<ch;
            j=j+1;
            ch=ch+1;
        }
        cout<<endl;
        i=i+1;
    }
}
