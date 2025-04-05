#include<iostream>
#include<stack>
using namespace std;

void removekth(stack<int>&st,int k){
    stack<int>temp;
    while(k--){
        temp.push(st.top());
        temp.pop();
    }
  s.pop();
  while(temp.size()>0){
    temp.push(st.top());
    st.top();
  }
}
int main(){
stack st1;
st1.push(1);
st1.push(2);
st1.push(3);
st1.push(4);
st1.push(5);
removekth(st1,2);
}