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
void display(Node* head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
void deletenode(Node*head,Node*target){
    Node*temp=head;
    while(temp->next!=target){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}
void deltevalue(Node*head,int tarval){
     Node*temp=head;
    while(temp->next->val!=tarval){
        temp=temp->next;
    }
    temp->next=temp->next->next;
}

int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
a->next=b;
b->next=c;
c->next=d;
display(a);
deltevalue(a,20);
display(a);
}