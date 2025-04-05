#include<iostream>
using namespace std;

class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        this->idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1){
            cout<<"stack overflow "<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
        // +;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack underflow"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){//for displaying elements
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    };
int main(){
stack st;
st.push(11);
st.push(99);
cout<<st.size()<<endl;
cout<<st.top()<<endl;
st.push(999);
st.display();
}