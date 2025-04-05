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

void display(Node*head){
Node*temp=head;
while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;
}
Node* mid(Node*head){
    Node*slow=head;//for even lenght fast!=NULL
    Node*fast=head;//for odd length fast->next!=NULL
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
int main(){
Node*a=new Node(10);
Node*b=new Node(20);
Node*c=new Node(30);
Node*d=new Node(40);
Node*e=new Node(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
display(a);
Node* t;
t=mid(a);
cout<<t->val<<" ";
}