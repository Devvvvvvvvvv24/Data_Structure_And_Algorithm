#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>&st){
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
        return;
    }
    int x=st.top();
    st.pop();
    pushATbottom(st,val);
    st.push(x);
}
void reverseSTACK(stack<int>&st){
    if(st.size()==1)return;
    int x=st.top();
    st.pop();
    reverseSTACK(st);
    pushATbottom(st,x);
}
int main(){
    stack<int>st;
    st.push(12);
    st.push(44);
    st.push(23);
    st.push(32);
    st.push(88);
    st.push(5);
    print(st);
    cout<<endl;
    //printrec(st);
    //pushATbottom(st,10);
    //cout<<endl;
    //print(st);
    reverseSTACK(st);
    print(st);

}