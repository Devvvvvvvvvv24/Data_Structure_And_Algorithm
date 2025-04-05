#include<iostream>
using namespace std;

void remove(string original,string ans){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    if(ch=='a')remove(original.substr(1),ans);
    else remove(original.substr(1),ans+ch);
}
int main(){
    string s="aannccfrr";
    int n=s.size();
    remove(s,"");
}