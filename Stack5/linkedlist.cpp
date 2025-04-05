#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class stack{
    public:
   Node*head;
   int s;
   stack(){
    head=NULL;
    s=0;
   } 
   void push(int val){   //no overflow condtition
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
    s++;
   }
   void pop(){
    if(head==NULL){
        cout<<"underflow condition"<<endl;
    }
    head=head->next;
    s--;
   }
   int top(){
    return head->val;
   }
   int size(){
   return s;
   }
};
int main(){
stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top()<<endl;
st.pop();
cout<<st.size()<<endl;
}