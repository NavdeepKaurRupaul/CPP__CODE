#include<iostream>
using namespace std;


int main(){

     int n;
    //cout<<"enter n"<<endl;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int j=1;
         val=i;
        while(j<=i){
            cout<<val;
            val=val+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }/*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  
}
