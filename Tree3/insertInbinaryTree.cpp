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

void insert(Node*root,int val){
    if(root==NULL) root=new Node(val);
    else if(root->val>val){
        if(root->left==NULL){
            root->left=new Node(val);
        }
        else insert(root->left,val);
    }
    else{
     if(root->right==NULL){
        root->right=new Node(val);
     }
     else insert(root->right,val);
    }
    // return root;
}
int main(){
    Node*a=new Node(10);
Node*b=new Node(7);
Node*c=new Node(15);
Node*d=new Node(6);
Node*e=new Node(8);
Node*f=new Node(12);
Node*g=new Node(19);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
insert(a,3);
display(a);
}