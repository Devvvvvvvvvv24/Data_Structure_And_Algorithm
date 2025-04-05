#include<iostream>
using namespace std;

void subset(string original,int idx,string ans){
    if(idx==original.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=original[idx];
    subset(original,idx+1,ans);
    subset(original,idx+1,ans+ch);
}
int main(){
    string s="abc";
    // int n=s.size();
    subset(s,0,"");
}