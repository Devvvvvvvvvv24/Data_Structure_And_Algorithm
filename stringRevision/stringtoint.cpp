#include<iostream>
using namespace std;

int main(){
    string s="12345";
    int ans=0;
    int pro=1;
    for(int i=s.length()-1;i>=0;i--){
        // pro*=10;
        ans+=(s[i]-'0')*pro;
        pro*=10;
    }
    cout<<ans;
}