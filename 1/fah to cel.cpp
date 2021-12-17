#include<iostream>
using namespace std;
int main(){
int S;
    cin>>S;
    int E;
    cin>>E;
    int W;
    cin>>W;
    while(S<=E){
        cout<<S<<"\t";
        int C;
        C=(5*(S-32))/9;
        cout<<C<<endl;
        S=S+W;
    }
}
