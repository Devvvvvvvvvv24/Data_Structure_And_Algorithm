#include<iostream>
using namespace std;

void permu(string s,string ans){
    if(s==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        permu(left+right,ans+ch);
    }
}
int main(){
    string s="abc";
    permu(s,"");
}