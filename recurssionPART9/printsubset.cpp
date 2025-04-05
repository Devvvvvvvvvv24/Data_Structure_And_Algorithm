#include<iostream>
using namespace std;


void subset(string s,string ans,int idx){
    if(idx==s.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=s[idx];
    subset(s,ans,idx+1);
    subset(s,ans+ch,idx+1);
}
int main(){
    string s="abc";
    subset(s,"",0);
}