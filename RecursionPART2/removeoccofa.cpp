#include<iostream>
#include<string>
using namespace std;
void print(string ans, string original){
    if(original.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=original[0];
    if(ch=='a')print(ans,original.substr(1));
    else print(ans+ch,original.substr(1));
}

int main(){
    string str="raghav garg";
    print("",str);
}