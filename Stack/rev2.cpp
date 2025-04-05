#include<iostream>
using namespace std;

class stack{
    public:
    int arr[5];
    int idx;
    stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1){
            cout<<"overflow condition"<<endl;
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"underflow conditon "<<endl;
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
    void display(){
        for(int i=0;i<=idx;i++){
            cout<<arr[i]<<" ";
            }
    }
};
int main(){
  stack st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  cout<<st.top()<<endl;
  st.pop();
  cout<<st.size()<<endl;
  st.display();  
}