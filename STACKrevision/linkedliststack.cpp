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

class stack2{
    public:
    Node*head;
    int size;
    stack2(){
        this->head=NULL;
        this->size=0;
    }
    void push(int val){//linkedlist has unlimited size NO OVERFLOW 
    Node*temp=new Node(val); //CONDITION
     temp->next=head;
     head=temp;                  
    size++;
    }
    void pop(){
        if(head==NULL){
        cout<<"under flow condition"<<endl;
        return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
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
stack2 st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.display();
st.pop();
cout<<st.top()<<endl;
st.pop();
cout<<st.size<<endl;
}