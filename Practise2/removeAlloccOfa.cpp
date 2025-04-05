#include<iostream>
using namespace std;

void remove(string str,string ans,int idx){
    if(idx==str.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=str[idx];
    if(ch=='a')remove(str,ans,idx+1);
    else remove(str,ans+ch,idx+1);
}
int main(){
    string str="raghav agrg";

    remove(str,"",0);
}