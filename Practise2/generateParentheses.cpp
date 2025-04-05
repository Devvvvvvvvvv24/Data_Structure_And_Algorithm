#include<iostream>
using namespace std;

void generate(int n,string s,int op,int cl){
    if(cl==n){
        cout<<s<<endl;
        return;
    }
    if(op<n)generate(n,s+'(',op+1,cl);
    if(cl<op)generate(n,s+')',op,cl+1);
}
int main(){
    int n;
    cin>>n;
    generate(n,"",0,0);
}