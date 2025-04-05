#include<iostream>
using namespace std;

class Node{   //USER DEFINED DATA  TYPE
    public:
    int val;  //data element
    Node* next;//address to next node
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
class LinkedList{
    public:
    Node*head;
    Node*tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    void insertATHead(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
            size++;
            return;
        }
        temp->next=head;
        head=temp;
        size++;
    }
    void insertATtail(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=temp=NULL;
            size++;
            return;
        }
        tail->next=temp;
        tail=temp;
        size++;
    }
void insertATidx(int idx,int val){
    Node*t=new Node(val);
    if(size==0)insertATHead(val);
    else if(idx==size)insertATtail(val);
    else {
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
         t->next=temp->next;
         temp->next=t;
         size++;
    }
}
int getelement(int idx){
    Node*temp=head;
    if(idx==0)return head->val;
    else if(idx==size-1)return tail->val;
    else{
    for(int i=1;i<=idx;i++){
        temp=temp->next;
    }
    return temp->val;
    }
}
void deleteATbeg(){
    if(size==0){
        head=tail=NULL;
        return;
    }
    //Node*temp=head;
    head=head->next;
    size--;
}

void deleteATTail(){
    if(size==0){
        head=tail=NULL;
        return;
    }
    Node*temp=head;
    while(temp->next->next!=NULL){
       temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}

void deleteatidx(int idx){
    if(idx==0)deleteATbeg();
    else if(idx==size-1)deleteATTail();
    else{
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }

}
Node* middle(){
    Node*slow=head;
    Node*fast=head;
    while(fast->next!=NULL &&fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void removenthNodeFromlast(int n){
    Node*slow=head;
    Node*fast=head;
    for(int i=1;i<=n;i++){
        fast=fast->next;
    }
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=slow->next->next;
}
};
int main(){
LinkedList ll;
ll.insertATHead(60);
ll.insertATHead(50);
ll.insertATHead(40);
ll.insertATHead(30);
ll.insertATHead(20);
ll.insertATHead(10);
ll.display();
Node* mid=ll.middle();
cout<<mid->val<<endl;
ll.removenthNodeFromlast(2);
ll.display();
}
