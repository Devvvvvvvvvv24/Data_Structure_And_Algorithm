#include<iostream>
using namespace std;

void rr(string &s,int begin,int end){
    for(int i=begin;i<=(begin+end)/2;i++){
        swap(s[i],s[begin+end-i]);
    }
}
int main(){
    string s="abcdefghi";
    int n=s.length();
    rr(s,n/2,n-1);
    cout<<s;
    }