#include <iostream>
#include<cmath>
using namespace std;
int main(){
	int basic;
	//cout<<"enter basic"<<endl;
	cin>>basic;
	char grade ;
	//cout<<"enter grade"<<endl;
	cin>>grade;
	//cout<<basic<<" "<<grade<<endl;
	
	int allow;
	if (grade=='A'){
	allow=1700;
	}
	else if(grade=='B'){
	allow=1500;
	}
	else{
		allow=1300;
	}
	//cout<<allow<<endl;
	
	double hra=.2*basic;
	double da=.5*basic;
	double pf=.11*basic;
	
	double total_salary=basic+hra+da+allow-pf;
	//cout<<total_salary<<endl;
    
	cout<<lround(total_salary)<<endl;
	}
