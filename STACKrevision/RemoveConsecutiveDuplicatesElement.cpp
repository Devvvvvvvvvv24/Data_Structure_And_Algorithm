#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

string removee(string s){
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i]!=st.top())st.push(s[i]);
    }
    s="";
    while(st.size()>0){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main(){
    string s="aaabbccddderr";
    cout<<s<<endl;
    s=removee(s);
    cout<<s<<endl;
}