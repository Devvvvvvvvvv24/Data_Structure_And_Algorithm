#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s="leetcode";
    vector<int>v(26,0);
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }

    int mx=0;
    for(int i=0;i<26;i++){
        if(v[i]>mx) mx=v[i];
    }

    for(int i=0;i<26;i++){
        if(v[i]==mx){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }

}