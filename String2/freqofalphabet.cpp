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
    for(int i=0;i<26;i++){
        if(arr[i]>0){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<arr[i]<<endl;
        }
    }
}