#include<iostream>
using namespace std;

void print(string ans,string original,int idx){
if(idx==original.length()){
    cout<<ans<<endl;
    return;
}
char ch=original[idx];
print(ans,original,idx+1);
print(ans+ch,original,idx+1);
}
int main(){
    string str="abc";
    print("",str,0);
}