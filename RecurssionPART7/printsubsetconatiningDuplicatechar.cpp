#include<iostream>
using namespace std;

void subset(string original,string ans,bool flag){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    if(original.size()==1){
        if(flag==true)subset(original.substr(1),ans+ch,true);
        subset(original.substr(1),ans,true);
        return;
    }
    char dh=original[1];
    if(ch==dh){
        if(flag==true)subset(original.substr(1),ans+ch,true);
        subset(original.substr(1),ans,false);
    }
    else{
        if(flag==true)subset(original.substr(1),ans+ch,true);
        subset(original.substr(1),ans,true);
    }
}
int main(){
   string s="aabc";
   bool flag=true;
   subset(s,"",flag);
}