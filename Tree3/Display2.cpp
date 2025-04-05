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
    if(root==NULL)return ;
     display(root->left);
    cout<<root->val<<" ";
  
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

int maxi(Node*root){
    if(root==NULL)return INT_MIN;
    return  max(root->val,max(maxi(root->left),maxi(root->right)));
}
int mini(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(mini(root->left),mini(root->right)));
}
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
int main(){
Node* a= new Node(1);
Node* b=new Node(21);
Node* c=new Node(3);
Node* d=new Node(0);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(7);
Node* h=new Node(8);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
d->left=h;
//display
display(a);
cout<<endl;
//sum of nodes
cout<<sum(a)<<endl;
//size /no. of nodes in a tree
cout<<size(a)<<endl;
//maximum value
cout<<maxi(a)<<endl;
//minimum value
cout<<mini(a)<<endl;
//levels in a tree
cout<<levels(a);
}