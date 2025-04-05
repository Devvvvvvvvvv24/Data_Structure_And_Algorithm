#include<iostream>
#include<stack>
using namespace std;

void print(stack<int>st){
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
void pushATindex(stack<int>&st,int idx,int val){
stack<int>temp;
while(st.size()>idx){
    temp.push(st.top());
    st.pop();
}
st.push(val);
while(temp.size()>0){
    st.push(temp.top());
    temp.pop();
}

}

void displayrev(stack<int>&st){
    if(st.size()==0){
        return;
    }
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    displayrev(st);
    displayrev(x);
}
int main(){
    stack<int>st;
    st.push(22);
    st.push(56);
    st.push(86);
    st.push(45);
    st.push(64);
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    stack<int>temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    st.push(33);
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        int x=temp.top();
        temp.pop();
        st.push(x);
    }
    cout<<endl;
    cout<<st.top()<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x=st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    cout<<endl;
    pushATindex(temp,2,1111);

    print(temp);
}