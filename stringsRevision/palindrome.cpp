#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    // int j=n-1
    bool flag=true;
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            flag=false;
            break;
        }
    }
    if(flag==true)cout<<"yes";
    else cout<<"no";
}