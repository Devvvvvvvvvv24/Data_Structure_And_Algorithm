#include<iostream>
using namespace std;

void paren(string s,int o,int c,int n){
    if(c==n){
        cout<<s<<endl;
        return;
    }
    if(o<n)paren(s+'(',o+1,c,n);
    if(c<o)paren(s+')',o,c+1,n);
}
int main(){
    int n;
    cin>>n;
    paren("",0,0,n);
}