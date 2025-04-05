#include<iostream>
using namespace std;

void remove(string s,string ans,int idx){
    if(idx==s.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=s[idx];
    if(ch=='a')remove(s,ans,idx+1);
    else remove(s,ans+ch,idx+1);
}
int main(){
    string s="aabbccddcaaccdd";
    remove(s,"",0);
}