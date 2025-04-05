#include<iostream>
using namespace std;

void subset(string s,string ans,int idx,bool flag){
    if(idx==s.size()){
        cout<<ans<<endl;
        return;
    }
    char ch=s[idx];
    if(s.size()==1){
        if(flag==true)subset(s,ans+ch,idx+1,true);
        subset(s,ans,idx+1,true);
        return;
    }
    
    char dh=s[idx+1];
    if(ch==dh){
     if(flag==true)subset(s,ans+ch,idx+1,true);
     subset(s,ans,idx+1,false);
    }
    else{
         if(flag==true)subset(s,ans+ch,idx+1,true);
     subset(s,ans,idx+1,true);
    }
}
int main(){
    string s="aab";
    bool flag=true;
    subset(s,"",0,flag);
}