#include<iostream>
#include<stack>
using namespace std;

void printrev(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    printrev(st);
    st.push(x); 
}

void printrec(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    st.pop();
    printrec(st);
    cout<<x<<" ";
    st.push(x);
}
void pushATbottom(stack<int>&st,int val){
    if(st.size()==0){
        st.push(val);
    }
    int x=st.top();
    st.pop();
    pushATbottom(st,val);
    st.push(x);
}
void reversee(stack<int>&st){
    if(st.size()==1)return;
    int x=st.top();
    st.pop();
    reversee(st);
    pushATbottom(st,x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
   //printrec(st);
   reversee(st);
   printrec(st);
}