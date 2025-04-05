#include<iostream>
using namespace std;
class Node{   //USER DEFINED DATA TYPE
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
    void push(int val){  //NO OVERFLOW CONDITION BECZ OF UNLIMITED SIZE
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"STACK IS EMPTY "<<endl;
            return;
        }
        head=head->next;
    }
    int top(){
        if(head==NULL){
            cout<<"STACK IS EMPTY "<<endl;
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
cout<<st.size<<endl;
cout<<st.top()<<endl;
st.push(10);
st.push(20);
st.push(30);
st.push(40);
cout<<st.size<<endl;
cout<<st.top()<<endl;
st.display();
}