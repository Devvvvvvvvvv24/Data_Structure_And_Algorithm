#include<iostream>
#include<vector>
using namespace std;
//VECTOR IMPLEMENTATION OF STACK
class Stack{  //USER DEFINED DATA STRUCTURE
public:
    vector<int>v;  //HAS UNLIMITED SIZE;
                //NO OVERFLOW CONDITION
    Stack(){
        
    }
    // SOME BASIC FUNCTIONS
    void push(int val){ //NO OVERFLOW CONDITION
       v.push_back(val);
    }
    void pop(){
        if(v.size()==0){
            cout<<"STACK IS EMPTY"<<endl;
            return;
        }
        v.pop_back();
    }
    int top(){
       if(v.size()==0){
            cout<<"STACK IS EMPTY"<<endl;
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