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
    int mididx=size/2;
    Node*mid=head;
    for(int i=1;i<=mididx;i++){
        mid=mid->next;
    }
    return mid;
}
Node* midd(Node*head){
    Node*slow=head;
    Node*fast=head;
    while(fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

void removen(Node*head,int n){
    Node*temp=head;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    int m=len-n+1;
    temp=head;
    for(int i=1;i<m-1;i++){
      temp=temp->next;
    }
    temp->next=temp->next->next;
}

Node* cycle(Node*head){
    Node*slow=head;
    Node*fast=head;
    bool flag=false; //no cycle
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            flag= true;
            break;
    }
    }
    if(flag==false)return NULL;
    else{
        Node*temp=head;
        while(slow!=temp){
            slow=slow->next;
            temp=temp->next;
        }
        return slow;
    }
    
}

Node* sorted(Node*head){
    Node*a=head;
    Node*b=head->next;
    while(b!=NULL){
        while(b!=NULL &&b->val==a->val){
            b=b->next;
        }
        a->next=b;
        a=b;
        if(b!=NULL)b=b->next;
    }
    return head;
}
int main(){
Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(20);
Node* d=new Node(30);
Node* e=new Node(30);
Node* f=new Node(40);
//Node* e=new Node(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;
e->next=f;
//d->next=e;
//display(a);
//Node* t;
//t=middleNode(a);
//cout<<t->val<<endl;;
//Node*tt=midd(a);
//cout<<tt->val<<endl;;
//removen(a,2);
//display(a);
//Node*t=cycle(a);
//cout<<t->val;
Node*t=sorted(a);
display(a);
}