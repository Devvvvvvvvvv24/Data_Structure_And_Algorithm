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
int size(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
void recprint(Node*temp){
    if(temp==NULL)return;
    cout<<temp->val<<" ";
    recprint(temp->next);
}

void revdisplay(Node* head){
    if(head==NULL)return;
    revdisplay(head->next);
    cout<<head->val<<" ";
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
cout<<size(a)<<endl;
recprint(a);
cout<<endl;
revdisplay(a);
}