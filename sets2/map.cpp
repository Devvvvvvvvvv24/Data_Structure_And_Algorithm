#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<int,int>s;
    s[2]=1;
    s[3]=4;
    for(auto x:s){
        cout<<x.first<<" ";
    }
}