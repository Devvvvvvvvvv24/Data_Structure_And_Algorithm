#include<iostream>
#include<vector>
using namespace std;

class Stack{
    public:
   vector<int>v;
    //int idx;
    Stack(){
      //  idx=-1;
    }
    void push(int val){
        //no overflow condition in vector
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"underflow condition"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"underflow condition"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
     return v.size();
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