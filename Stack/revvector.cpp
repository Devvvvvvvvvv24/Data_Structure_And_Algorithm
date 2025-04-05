#include<iostream>
#include<vector>
using namespace std;

class stack{
    public:
    vector<int>v;
    stack(){
    
    }
    void push(int val){  //unlimited size
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
    void display(){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
// stack st;
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