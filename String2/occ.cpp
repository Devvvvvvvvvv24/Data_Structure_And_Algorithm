#include<iostream>
#include<vector>
using namespace std;

int main(){
    string ss="devvv";
    vector<int>v(26,0);
    for(int i=0;i<26;i++){
        char ch=ss[i];
        int ascii=(int)ch;
        v[ascii-97]++;
    }
    for(int i=0;i<26;i++){
            if(v[i]>0){
                int ascii=i+97;
                char ch=(char)ascii;
                cout<<ch<<" "<<v[i]<<endl;
        }
    }
}