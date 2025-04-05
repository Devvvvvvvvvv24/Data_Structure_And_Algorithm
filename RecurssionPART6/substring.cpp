#include<iostream>
using namespace std;

void print(string str,string ans,int idx){
    if(idx==str.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=str[idx];
    print(str,ans,idx+1);
    print(str,ans+ch,idx+1);
}
int main(){
    string str="dev";
    print(str,"",0);
}