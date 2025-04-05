#include<iostream>
using namespace std;

void paren(string ans,int n,int o, int c){
    if(c==n){
        cout<<ans<<endl;
        return;
    }
   if(o<n)paren(ans+'(',n,o+1,c);
   if(c<o)paren(ans+')',n,o,c+1);
}
int main(){
    int n;
    cin>>n;
    paren("",n,0,0);
}