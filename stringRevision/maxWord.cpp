#include<iostream>
using namespace std;

int main(){
 
    string s="dev is a good boy";
    int n=s.size();
    string word="";
    string maxword="";
    for(int i=0;i<n;i++){
        if(s[i]==' '){
            maxword=max(word,maxword);
            word="";
        }
        else {
            word+=s[i];
        }
    }
    maxword=max(word,maxword);
    cout<<maxword;
}