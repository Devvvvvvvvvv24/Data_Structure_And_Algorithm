#include<iostream>
using namespace std;

void permu(string str,string ans){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<str.size();i++){
        char ch=str[i];
        string left=str.substr(0,i);
        string right=str.substr(i+1);
        permu(left+right,ans+ch);
    }
}
int main(){
    string str="abc";
    permu(str,"");
}