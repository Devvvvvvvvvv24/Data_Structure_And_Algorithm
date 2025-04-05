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

int sum(Node*root){
    if(root==NULL)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int pro(Node*root){
    if(root==NULL)return 1;
    return root->val*pro(root->left)*pro(root->right);
}
int maxx(Node*root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxx(root->left),maxx(root->right)));
}
int minn(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minn(root->left),minn(root->right)));
}
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
//height =levels-1
int main(){
Node*a=new Node(1);
Node*b=new Node(2);
Node*c=new Node(3);
Node*d=new Node(4);
Node*e=new Node(5);
Node*f=new Node(6);
Node*g=new Node(7);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
cout<<sum(a)<<endl;
cout<<pro(a)<<endl;
cout<<maxx(a)<<endl;
cout<<minn(a)<<endl;
cout<<levels(a)<<endl;
cout<<size(a)<<endl;
}