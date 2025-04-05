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
Node* middleNode(Node*head){
    Node*temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    int mididx=size/2-1;
    Node*mid=head;
    for(int i=1;i<=mididx;i++){
        mid=mid->next;
    }
    return mid;
}
int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
//Node* e=new Node(50);
a->next=b;
b->next=c;
c->next=d;
//d->next=e;
display(a);
Node* t;
t=middleNode(a);
cout<<t->val;
}