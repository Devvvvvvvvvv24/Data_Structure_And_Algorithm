#include<iostream>
#include<stack>
using namespace std;

void pushatBOttom(stack<int>&st,int x){
    if(st.size()==0){
        st.push(x);
        return;
    }
    int val=st.top();
    st.pop();
    pushatBOttom(st,x);
    st.push(val);
}
void reverse(stack<int>&st){
if(st.size()==1)return;
int x=st.top();
st.pop();
reverse(st);
pushatBOttom(st,x);
}

int main(){
  stack<int>st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(4);
  st.push(5);
  reverse(st);
  while(st.size()>0){
      cout<<st.top()<<endl;
      st.pop();
  }
  
  
  }