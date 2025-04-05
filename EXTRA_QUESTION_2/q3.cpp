#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=0;j<s.size();j++){
            if(i!=j && s[i]==s[j])count++;
        }
        if(count==0)cout<<s[i]<<" ";
    }
}