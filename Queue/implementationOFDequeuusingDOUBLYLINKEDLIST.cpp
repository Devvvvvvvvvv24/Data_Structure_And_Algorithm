#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*prev;
    Node*next;
    Node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
class Dequeue{
    public:
    Node*head;
    Node*tail;
    int s;
    Dequeue(){
        head=tail=NULL;
        s=0;
    }
    void push_front(int val){
        Node*temp=new Node(val);
        if(s==0){
        head=tail=temp;
        }
        else{
            temp->next=head;
            head->prev=temp;
            head=temp;
        }
        s++;
    }
    void push_back(int val){
        Node*temp=new Node(val);
        if(s==0){
            head=tail=temp;
        }
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        s++;
    }


void pop_front(){
    if(s==0){
        cout<<"list is empty"<<endl;
        return;
    }
    head=head->next;
    if(head)head->prev=NULL;
    if(head==NULL)tail==NULL;
    s--;
}
void pop_back(){
    if(s==0){
        cout<<"list is empty "<<endl;
        return;
    }
    else if(s==1){
        pop_front();
    }
    else{
        Node*temp=tail->prev;
        tail->next=NULL;
        tail=temp;
     
    }
    
s--;
}
 int front(){
        if(s==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return head->val;
    }
    int back(){
        if(s==0){
            cout<<"queue is emptyy"<<endl;
            return -1;
        }
        return tail->val;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
}; 
int main(){
Dequeue dq;
dq.push_back(10);
dq.push_back(20);
dq.push_back(30);
dq.display();
dq.push_front(60);
dq.display();
}