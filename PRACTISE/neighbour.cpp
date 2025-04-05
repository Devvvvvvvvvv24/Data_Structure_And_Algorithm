#include<iostream>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    int count=0;

    for(int i=0;i<s.size();i++){
        if(s.size()==1){
            break;
        }
        if(s.size()==2 &&s[i]!=s[i+1]){
            count=1;
            break;
        }
       if(i==0){
        if(s[i]!=s[i+1])count++;
       }
       else if(i==n-1)
    }
}