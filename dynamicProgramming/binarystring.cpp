#include<iostream>
using namespace std;
int count=0;
void helper(string ans,int n){
if(ans.size()==n){
    cout<<ans<<endl;
    count++;
    return;
}
helper(ans+'0',n);
if(ans=="" || ans[ans.size()-1]=='0')helper(ans+'1',n);
}
int main(){
    int n;
    cin>>n;
    // int count=0;
    helper("",n);
    cout<<count;
}