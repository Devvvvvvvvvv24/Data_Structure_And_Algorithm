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
    void push(int val){ //unlimited size no overflow condition
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
st.display();
}