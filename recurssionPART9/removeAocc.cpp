#include<iostream>
using namespace std;

void remove(string s,int n,string ans,int idx){
    if(idx==n){
        cout<<ans<<endl;
        return;
    }
    char ch=s[idx];
    if(ch=='a')remove(s,n,ans,idx+1);
    else remove(s,n,ans+ch,idx+1);
}
int main(){
    string s="abbccddaaad";
    int n=s.size();
    remove(s,n,"",0);
}