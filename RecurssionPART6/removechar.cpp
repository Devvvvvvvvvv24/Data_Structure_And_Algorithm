#include<iostream>
using namespace std;

void remove(string ans,string original,int idx){
    if(idx==original.length()){
        cout<<ans;
        return;
    }
    char ch=original[idx];
    if(ch=='e')remove(ans,original,idx+1);
    else remove(ans+ch,original,idx+1);
}

int main(){
    string original="leetcodei";
    string ans="";
    remove(ans,original,0);
}