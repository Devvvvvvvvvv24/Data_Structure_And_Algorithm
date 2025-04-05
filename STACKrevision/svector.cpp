#include<iostream>
#include<vector>
using namespace std;

class stack{
    public:
    vector<int>v;
    stack(){

    }
    void push(int val){
        v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"stack underflow"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
        if(v.size()==0){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        return v[v.size()-1];
    }
    int size(){
        return v.size();
    }
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
stack st;

st.push(11);
st.push(78);
st.push(27);
cout<<st.size()<<endl;
st.push(88);
st.display();

}