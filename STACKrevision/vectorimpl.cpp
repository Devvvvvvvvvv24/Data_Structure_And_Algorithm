#include<bits/stdc++.h>
#include<vector>
using namespace std;

class stack1{
    public:
    vector<int>v; //unlimited size no overflow condition
    stack(){

    }
  void push(int val){
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
stack1 st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
st.pop();
cout<<st.top();
st.pop();
cout<<st.size();
}