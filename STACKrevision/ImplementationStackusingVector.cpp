#include<iostream>
#include<vector>
using namespace std;

class stack{
    public:
    vector<int>v;
    stack(){

    }
    void push(int val){//no overflow condition becz it has unlimited size
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
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
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