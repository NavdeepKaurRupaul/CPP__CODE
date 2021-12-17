#include<iostream>
using namespace std;
int main(){
	int n;
	//cout<<"enter n"<<endl;
	cin>>n;
	int i=2;
	while(i<=n){
		int j=2;
		while(j<=i-1){
			if(i%j!=0)
			j=j+1;
            else
            {break;}
		}
        if(i==j)
		cout<<i<<endl;
		i=i+1;
	}
}
