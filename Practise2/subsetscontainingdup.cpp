#include<iostream>
#include<algorithm>
using namespace std;

void subset(string str,string ans,int idx,bool flag){
    if(idx==str.size()){
        cout<<ans<<" ";
        return;
    }
    char ch=str[idx];
    if(str.size()==1){
        if(flag==true)subset(str,ans+ch,idx+1,true);
        subset(str,ans,idx+1,true);
        return;
    }
    char dh=str[idx+1];
    if(ch==dh){
        if(flag==true)subset(str,ans+ch,idx+1,true);
        subset(str,ans,idx+1,false);
    }
    else{
        if(flag==true)subset(str,ans+ch,idx+1,true);
        subset(str,ans,idx+1,true);
    }

}//subset containg duplicates
int main(){
    string str="aba";
    sort(str.begin(),str.end());//important
    int idx=0;
    bool flag=true;
    subset(str,"",idx,flag);
}