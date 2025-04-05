#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string str="AYZDAZXIYZXDX";
    string s="";
    for(int i=0;i<str.length();i++){
        if(str[i]>='X'){
            s.push_back(str[i]);
        }
    }
cout<<s<<endl;
for(int i=0;i<s.length();i++){
    for(int j=0;j<s.length()-1-i;j++){
    if(s[i]<s[i+1]){
        char temp=s[i];
        s[i]=s[i+1];
        s[i+1]=temp;
    }
    }
}
cout<<s;
}