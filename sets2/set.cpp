#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(7);
    s.insert(8);
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<endl;
    int tar=4;
    if(s.find(tar)!=s.end()){
        cout<<"found"<<endl;
    }
    else cout<<"not found";
}