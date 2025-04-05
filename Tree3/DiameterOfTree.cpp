#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

void display(Node*root){
    if(root==NULL)return;
     cout<<root->val<<" ";
    display(root->left);
   display(root->right);
}

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void helper(Node*root,int &maxDia){
    if(root==NULL)return;
    int dia=levels(root->left)+levels(root->right);
    maxDia=max(dia,maxDia);
    helper(root->left,maxDia);
    helper(root->right,maxDia);
}
int diameter(Node*root){
    int maxDia=0;
    helper(root,maxDia);
    return maxDia;
}
Node* invert(Node*root){
    if(root==NULL)return NULL;
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    invert(root->left);
    invert(root->right);
    return root;
}
int prod(Node*root){
    if(root==NULL)return 1;
    return root->val*prod(root->left)*prod(root->right);
}

void nthlevel(Node*root,int curr,int level){
    if(root==NULL)return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->left,curr+1,level);
    nthlevel(root->right,curr+1,level);
}
int main(){
Node* a= new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(7);
// Node* h=new Node(8);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
// d->left=h;
// cout<<diameter(a);
display(a);
cout<<endl;
Node*r=invert(a);
 display(r);
 cout<<endl;
 cout<<prod(a);
}