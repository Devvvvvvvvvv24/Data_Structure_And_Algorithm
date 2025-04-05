#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="aabbbdccrfnnscniwncwenvcnewcnpmvvnsrv";
    int n=s.size();
    vector<int>arr(26,0);
    for(int i=0;i<26;i++){//traverse whole vector
      char ch=s[i];
      int ascii=(int)ch;//calculaye ascii value of it
      arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<arr[i]<<endl;
        }
    }
}