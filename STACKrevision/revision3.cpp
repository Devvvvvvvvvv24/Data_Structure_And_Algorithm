#include<bits/stdc++.h>
using namespace std;

void pushATbottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushATbottom(st,val);
    st.push(x);
}
void display(stack<int>&st){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void revrecursion(stack<int>&st){
    if(st.size()==1)return;
    int x=st.top();
    st.pop();
    revrecursion(st);
    pushATbottom(st,x);
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    pushATbottom(st,11);
    display(st);
    revrecursion(st);
    display(st);
}