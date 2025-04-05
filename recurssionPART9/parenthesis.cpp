#include<iostream>
using namespace std;

void parenthsis(string s,int o,int c,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n)parenthsis(s+'(',o+1,c,n);
    if(c<o)parenthsis(s+')',o,c+1,n);
}
int main(){
    int n;
    cin>>n;
    parenthsis("",0,0,n);
}