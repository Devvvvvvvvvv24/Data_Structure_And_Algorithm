#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="devvvvvv";
    // getline(cin,s);
    vector<int>arr(26,0);
    //stores occ of each letter in speacial array
    for(int i=0;i<26&&s[i]!='\0';i++){
        char ch=s[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<arr[i]<<endl;
        }
    }
}