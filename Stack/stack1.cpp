#include<iostream>
#include<stack>
using namespace std;

void pushelebottom(stack<int>&st,int val){
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>st;//stl->standard library template
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    stack<int>temp1;
    stack<int>temp2;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
       temp1.push(x);

    }
    cout<<endl;
    while(temp1.size()>0){
       cout<<temp1.top()<<" ";
       int x=temp1.top();
       temp1.pop();
       temp2.push(x);
    }
    cout<<endl;
    while(temp2.size()>0){
        cout<<temp2.top()<<" ";
        int x=temp2.top();
        temp2.pop();
        st.push(x);
    }
    cout<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    pushelebottom(st,88);
     while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
     }
}