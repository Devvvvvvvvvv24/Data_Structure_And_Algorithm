#include<iostream>
using namespace std;

void paths(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    paths(n-1,ans+'0');
    if(ans=="" || ans[ans.size()-1]=='0')paths(n-1,ans+'1');
}
int main(){
    int n;
    cin>>n;
    paths(n,"");
}