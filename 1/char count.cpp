#include<iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	char d;
     int e;
     char f;
     char g;
	int count=0;
	while(c!='$'){
		count++;
		cin>>c;
		if(c>=0 && c<=9){
	       e=c;
	       cout<<e<<endl;
		   }
	       /*if(c>='a' && c<='z' || c>='A' && c<='Z'){
	       	f=c;
	       	 cout<<f<<endl;
		   }
		   else{
		   	g=c;
		   	 cout<<g<<endl;
		   }*/
		if(c=='$'){
			break;
		}
		cout<<c<<endl;
	}
	/*cout<<count<<endl;*/
}

