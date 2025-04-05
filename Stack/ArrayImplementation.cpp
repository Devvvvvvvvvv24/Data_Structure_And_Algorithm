#include<iostream>
using namespace std;
//ARRAY IMPLEMENTATION OF STACK
class Stack{  //USER DEFINED DATA STRUCTURE
public:
    int arr[5];  //HAS FIXED SIZE;
    int idx;
    Stack(){
        idx=-1;
    }
    // SOME BASIC FUNCTIONS
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])){
            cout<<"STACK IS FULL "<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"STACK IS EMPTY"<<endl;
            return;
        }
        idx--;
    }
    int top(){
        if(idx==-1){
            cout<<"STACK IS EMPTY"<<endl;
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
cout<<st.size()<<endl;
cout<<st.top()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<st.size()<<endl;
cout<<st.top()<<endl;
st.pop();
st.pop();
cout<<st.size()<<endl;
cout<<st.top()<<endl;
}