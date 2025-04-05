#include<iostream>
#include<stack>
using namespace std;

void removekth(stack<int>&st,int k){
    stack<int>temp;
    while(st.size()>0){
        if(st.top()==k){
            st.pop();
            break;
        }
        int x=st.top();
        st.pop();
        temp.push(x);
        }
        while(temp.size()>0){
            st.push(temp.top());
            temp.pop();
        }

}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    removekth(st,30);
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
}