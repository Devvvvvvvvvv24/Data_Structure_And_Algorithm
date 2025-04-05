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
        cout<<"overflow condition"<<endl;
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
        return arr[idx];
    }
    int size(){
        return idx+1;
    }
    void display(){
        for(int i=0;i<=idx;i++){//importannttttt
         cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    };
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
st.pop();
cout<<st.top()<<endl;
st.pop();
cout<<st.size()<<endl;
}