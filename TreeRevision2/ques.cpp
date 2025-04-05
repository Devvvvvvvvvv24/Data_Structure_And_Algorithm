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

void display(Node*root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->prev);
    display(root->next);
}

int sum(Node*root){
    if(root==NULL)return 0;
    return  root->val+sum(root->prev)+sum(root->next);
}

int product(Node*root){
    if(root==NULL)return 1;
    return root->val*product(root->prev)*product(root->next);
}

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->prev),levels(root->next));
}
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);

    a->prev=b;
    a->next=c;
    b->prev=d;
    b->next=e;
    c->prev=f;
    c->next=g;

    display(a);
    cout<<endl<<sum(a)<<endl;
    cout<<product(a)<<endl;
    cout<<levels(a)<<endl;
    int height=levels(a)-1;
    cout<<height<<endl;
    
}