#include<iostream>
using namespace std;

void cons(string s,int n){
    if(n==0){
        cout<<s<<endl;
        return;
    }
    cons(s+'0',n-1);
    if(s=="" ||s[s.size()-1]=='0')cons(s+'1',n-1);
}
int main(){
    int n=4;
    cons("",n);
}