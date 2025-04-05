#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node*prev;
    node*next;
    node(int val){
        this->val=val;
        this->prev=NULL;
        this->next=NULL;
    }
};

void display(node*root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    display(root->prev);
    display(root->next);
}
int sum(node*root){
    if(root==NULL)return 0;
    return root->val+sum(root->prev)+sum(root->next);
}
int product(node*root){
    if(root==NULL)return 1;
    return root->val*product(root->prev)*product(root->next);
}
int size(node*root){
    if(root==NULL)return 0;
    return 1+size(root->prev)+size(root->next);
}
int level(node*root){
    if(root==NULL)return 0;
    return 1+max(level(root->prev),level(root->next));
}
int maxxx(node*root){
    if(root==NULL)return 1;
    return max(root->val,max(maxxx(root->prev),maxxx(root->next)));

}
int diameter(node*root,int &maxdia){
    if(root==NULL)return 0;
    int dia=level(root->prev)+level(root->next);
    maxdia=max(maxdia,dia);
    diameter(root->prev,maxdia);
    diameter(root->next,maxdia);
    return maxdia;
}
int main(){
node*a=new node(1);
node*b=new node(2);
node*c=new node(3);
node*d=new node(4);
node*e=new node(5);
node*f=new node(6);
node*g=new node(7);
a->prev=b;
a->next=c;
b->prev=d;
b->next=e;
c->prev=f;
c->next=g;
display(a);
cout<<endl;
cout<<sum(a)<<endl;
cout<<product(a)<<endl;
cout<<level(a)<<endl;
//height = level-1
int maxdia=0;
cout<<maxxx(a);
cout<<endl;
cout<<diameter(a,maxdia);
}