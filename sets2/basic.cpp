#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
unordered_set<int>s;
s.insert(21);
s.insert(4);
s.insert(6);
s.insert(6);
for(int ele:s){
    cout<<ele<<" ";
}
}