#include<iostream>
#include<vector>
using namespace std;

void storeSubset(string ans,string original,vector<string>&v,bool flag){
    if(original==""){
        v.push_back(ans);
        return;
    }
    char ch=original[0];
    if(original.length()==1){
        
    }
}
int main(){
    string str="aab";
    vector<string>v;
    storeSubset("",str,v,true);

  
}