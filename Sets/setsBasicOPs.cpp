#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    cout<<s.size();
    cout<<endl;
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl;
    int tar=14;
    if(s.find(tar)!=s.end()){
        cout<<"exists"<<endl;
    }
    else{
        cout<<"not exists"<<endl;
    }
}