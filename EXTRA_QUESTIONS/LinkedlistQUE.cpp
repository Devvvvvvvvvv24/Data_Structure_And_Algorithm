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
void display(Node*head){
    Node*temp=head;
while(temp){
    cout<<temp->val<<" ";
    temp=temp->next; 
}
cout<<endl;
}
Node* removedup(Node*head){
Node*a=head;
Node*b=head->next;
while(b!=NULL){
    while(b!=NULL && b->val==a->val){
      b=b->next;
    }
    a->next=b;
    a=b;
    if(b!=NULL)b=b->next;
}
return head;
}

Node* sortli(Node*head,int k){
    Node*temp=head;
    if(head==NULL ||head->next==NULL)return head;
    int n=0;
    Node*tail=NULL;
    while(temp!=NULL){
   if(temp->next==NULL)tail=temp;
  
   temp=temp->next;
    n++;
    }
    k=k%n;
    if(k==0)return head;
    temp=head;
  for(int i=1;i<n-k;i++){
   temp=temp->next;
  }
  tail->next=head;
  head=temp->next;
  temp->next=NULL;
  return head;
}
Node* rota(Node*head,int k){
    Node*temp=head;
    if(head==NULL ||head->next==NULL)return head;
    int n=0;
    Node*tail=NULL;
    while(temp!=NULL){
   temp=temp->next;
    n++;
    }
    Node*slow=head;
    Node*fast=head;
    while(k--){
    fast=fast->next;
    }
    while(fast->next!=NULL){
        fast=fast->next;
        slow=slow->next;
    }
    fast->next=head;
    head=slow->next;
    slow->next=NULL;
    return head;
}
int main(){
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    Node* f=new Node(60);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    display(a);
    removedup(a);
    display(a);
  // sortli(a,5);
  rota(a,2);
   display(a);
}