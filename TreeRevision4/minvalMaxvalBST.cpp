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
int minval(Node*root){
    if(!root)return -1;
    if(!root->left &&!root->right)return root->val;
    minval(root->left);
}
int maxval(Node*root){
    if(!root)return -1;
    if(!root->left &&!root->right)return root->val;
    maxval(root->right);
}
int main(){
Node*a=new Node(10);
Node*b=new Node(5);
Node*c=new Node(15);
Node*d=new Node(4);
Node*e=new Node(7);
Node*f=new Node(13);
Node*g=new Node(17);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
cout<<minval(a)<<" ";
cout<<maxval(a);
}