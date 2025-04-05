#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s="leetcode";
    vector<int>arr(26,0);
    for(int i=0;i<26;i++){
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(mx<arr[i])mx=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx;
        }
    }
}