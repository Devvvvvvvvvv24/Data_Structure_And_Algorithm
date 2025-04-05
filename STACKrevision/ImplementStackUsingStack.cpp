#include<iostream>
using namespace std;

class stack{  //user defined data structure
public:
int arr[5];
int idx;
       stack(){
         this->idx=-1;
       }
       void push(int val){
        if(idx==sizeof(arr)/sizeof(arr[0])-1){
         cout<<"stack overflow condition"<<endl;
         return;
        }
        idx++;
        arr[idx]=val;
       }
       void pop(){
        if(idx==-1){
            cout<<"stack underflow condition"<<endl;
            return;
        }
        idx--;
       }
       int top(){
        if(idx==-1){
           cout<<"stack is empty"<<endl;
           return -1;
        }
        return arr[idx];
       }
       int size(){
        return idx+1;
       }

};
int main(){
 stack st;
 st.push(1);
 cout<<st.top()<<endl;
 st.push(33);
 st.push(67);
 st.push(12);
 cout<<st.size()<<endl;
 cout<<st.top()<<endl;
 st.push(333);
 cout<<st.top()<<endl;
 st.push(222);
 cout<<st.top();
}