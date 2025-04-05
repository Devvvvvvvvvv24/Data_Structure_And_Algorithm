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

int sum(Node*root){
    if(root==NULL)return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int mmaxx(Node*root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(mmaxx(root->left),mmaxx(root->right)));
}
int minn(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minn(root->left),minn(root->right)));
}
int pro(Node*root){
    if(root==NULL)return 1;
    return root->val*pro(root->left)*pro(root->right);
}
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void preorder(Node*root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(Node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
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
display(a);
cout<<endl;
cout<<sum(a)<<endl;
cout<<size(a)<<endl;
cout<<mmaxx(a)<<endl;
cout<<minn(a)<<endl;
cout<<pro(a)<<endl;
cout<<levels(a)<<endl;
preorder(a);
cout<<endl;
inorder(a);
cout<<endl;
postorder(a);
cout<<endl;
nthlevel(a,0,2);
}