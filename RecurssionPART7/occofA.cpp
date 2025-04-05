#include<iostream>
using namespace std;

void remove(string original,string ans,int idx){
    if(idx==original.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    if(ch=='a')remove(original,ans,idx+1);
    else remove(original,ans+ch,idx+1);
}
int main(){
    string s="aavbsaartgsa";
    int n=s.size();
    remove(s,"",0);
}