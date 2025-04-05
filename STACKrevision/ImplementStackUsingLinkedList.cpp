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
    Node*head; //linked has unlimited size NO OVERFLOW CONDITION
    int size;
    stack(){
        this->head=NULL;
        this->size=0;
    }
    void push(int val){
    Node*temp=new Node(val);
    temp->next=head;
    head=temp;
    size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack underflow CONDITION"<<endl;
            return;
        }
        head=head->next;
        size--;
    }
    int top(){
        return head->val;

    }
    void print(Node*head){
        if(head==NULL)return;
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        Node*temp=head;
        print(temp);
        cout<<endl;
    }
};
int main(){
 stack st;
 st.push(1);
 cout<<st.top()<<endl;
 st.push(33);
 st.push(67);
 st.push(12);
 cout<<st.size<<endl;
 cout<<st.top()<<endl;
 st.push(333);
 cout<<st.top()<<endl;
 st.push(222);
 cout<<endl;
 cout<<st.top();
 cout<<endl;
 st.display();
}