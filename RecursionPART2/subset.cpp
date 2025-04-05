#include<iostream>
using namespace std;

void print(string ans,string original){
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    char ch=original[0];
    print(ans+ch,original.substr(1));
    print(ans,original.substr(1));
}
int main(){
    string str="abc";
    print("",str);
}