#include<iostream>
using namespace std;

void consi(int n,string ans){
    if(n==0){
        cout<<ans<<endl;
        return;
    }
    consi(n-1,ans+'0');
    if(ans=="" || ans[ans.length()-1]=='0')consi(n-1,ans+'1');

}
int main(){
    int n;
    cin>>n;
    consi(n,"");
}