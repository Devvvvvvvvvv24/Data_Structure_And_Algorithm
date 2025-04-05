#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"overflow condition "<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"underflow condition"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"underflow condition "<<endl;
            return -1;
        }
        return arr[idx];
    }
    int size(){
     return idx+1;
    }
};
int main(){
    Stack st;
    st.push(12);
    st.push(43);
    st.push(2);
    cout<<st.top()<<endl;
   
    st.pop();
    cout<<st.size()<<endl;
     cout<<st.top()<<endl;

}