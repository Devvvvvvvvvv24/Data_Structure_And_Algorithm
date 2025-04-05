#include<iostream>
#include<stack>
using namespace std;

class stack{
public:
int arr[5];
int top;
stack(){
    idx=-1;
}
void push(int val){
    if(idx==sizeof(arr)/sizeof(arr[0])-1){
        cout<<"overflow condition"<<endl;
        return;
    }
    top++;
    arr[top]=val;
}
void pop(){
    if(top==-1){
        cout<<"underflow conition"<<endl;
        return;
    }
    top--;
}
void size(){
    return top;
}

}

void pushAtbottom(stack<int>&st,int val){
    stack<int>temp;
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
void recursion(stack<int>&st){
if(st.size()==0)return;
cout<<st.top()<<" ";
int x=st.top();
st.pop();
recursion(st);
st.push(x);
}

void bottomrev(stack <int>&st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    bottomrev(st,val);
    st.push(x); 
}


//reverseeee the stack using recursionnnnnnnnn
void reverse(stack<int>&st){
if(st.size()==1)return;
int x=st.top();
st.pop();
reverse(st);    //////reverse the stack using recursionnnnnnnnn
bottomrev(st,x);
}

void reverserecursion(stack<int>&st){
    if(st.size()==0)return;
    int x=st.top();
    st.pop();
    reverserecursion(st);
    
    st.push(x);
    cout<<x<<" ";

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
void pushAtindex(stack<int>&st,int val,int idx){
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
int main(){
    // stack<int>st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.push(5);
    // cout<<endl;
    // recursion(st);
    // cout<<endl;
    // reverserecursion(st);

    // pushAtbottom(st,222);
    // cout<<endl;
    // display(st);
    // pushAtindex(st,22222,2);
    // display(st);
    // bottomrev(st,1111);
    // display(st);
    // reverse(st);
    // display(st);
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.size();
}