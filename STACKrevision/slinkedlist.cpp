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
    int size;
    stack(){
        this->head=NULL;
        this->size=0;
    }
    void push(int val){ //no overflow condition as stack has unlimited size
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"underflow condition"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty "<<endl;
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
    stack st;
    st.push(23);
    st.push(78);
    st.push(88);
    st.display();
    st.push(12);
    cout<<st.size<<endl;
}