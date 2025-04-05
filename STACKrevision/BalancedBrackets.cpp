#include<iostream>
#include<stack>
using namespace std;

bool isbalanced(string str){
    if(str.length()%2!=0)return false;

stack<char>st;
// st.push(s[0]);
for(int i=0;i<str.length();i++){
    if(str[i]=='(')st.push(str[i]);
    else{
        if(st.size()==0)return false;
        else st.pop();
    }
}
if(st.size()==0)return true;
else return false;
}
int main(){
    string s="()))";
    cout<<isbalanced(s);
}