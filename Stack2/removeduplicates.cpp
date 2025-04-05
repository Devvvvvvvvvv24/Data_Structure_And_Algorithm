#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

string removedupl(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
       if(st.top()!=s[i])st.push(s[i]);
    }
    s="";
    while(!st.empty()){
        s+=st.top(); //append
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s="aaabbaabbddbbeehh";
    string dev=removedupl(s);
    cout<<dev;
    }