#include<iostream>
using namespace std;

void permu(string original,string ans){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.size();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permu(left+right,ans+ch);
      }
}
int main(){
    string s= "abcd";
    permu(s,"");
}