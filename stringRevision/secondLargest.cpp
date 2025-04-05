#include<iostream>
using namespace std;


int main(){
    string s="45312795";
    int n=s.size();
    char ch1='!';
    char ch2='!';
    for(int i=1;i<n;i++){
        if(ch1<s[i]){
            ch2=ch1;
            ch1=s[i];
        }
        else if(ch2<s[i] &&s[i]!=ch1){
               ch2=s[i];
        }
    }
    cout<<ch2;
}