#include<iostream>
using namespace std;


int main(){
    string s="computer science is the future";
    string res="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='t')res+=s[i];
    }
    cout<<res<<endl;
}