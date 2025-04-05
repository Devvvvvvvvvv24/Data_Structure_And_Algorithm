#include<iostream>
using namespace std;

class Node{ //USER DEFINED DATA TYPE
public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class Stack{
    public:
    Node*head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
  void push(int val){
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
  }
  void pop(){
    if(head==NULL){
        cout<<"UNDERFLOW CONDITION "<<endl;
        return;
    }
    head=head->next;
  }
  int top(){
    if(head==NULL){
        cout<<"UNDERFLOW CONDITION "<<endl;
        return -1;
    }
    return head->val;
  }
  void print(Node*temp){
   if(temp==NULL)return;
   print(temp->next);
   cout<<temp->val<<" ";
  }
  void display(){
    Node*temp=head;
    print(temp);
    cout<<endl;

  }
};

int main(){
  Stack st;
    st.push(12);
    st.push(43);
    st.push(2);
    st.push(99);
    st.push(78);
    st.push(122);
    //cout<<st.top()<<endl;
     // st.pop();
    //cout<<st.size<<endl;
     //cout<<st.top()<<endl;
     st.display();

}