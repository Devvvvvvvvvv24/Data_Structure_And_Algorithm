#include<iostream>
using namespace std;


void subset(string str,string ans,int idx){
    if(idx==str.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=str[idx];
    subset(str,ans,idx+1);
    subset(str,ans+ch,idx+1);
}
int main(){
    string str="abc";
    subset(str,"",0);
}