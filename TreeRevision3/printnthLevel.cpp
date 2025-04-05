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

void predecessor(Node*root){
    if(root==NULL)return;
    Node*pred=root->left;
    while(pred->right){
        pred=pred->right;
    }
    cout<<pred->val<<endl;
}
void successor(Node*root){
    if(root==NULL)return;
    Node*succ=root->right;
    while(succ->left){
    succ=succ->left;
    }
    cout<<succ->val<<endl;
}
int main(){
    Node*a=new Node(10);
    Node*b=new Node(5);
    Node*c=new Node(15);
    Node*d=new Node(3);
    Node*e=new Node(7);
    Node*f=new Node(13);
    Node*g=new Node(17);

    a->left=b;
    a->right=c;

    b->left=d;
    b->right=e;

    c->left=f;
    c->right=g;
    predecessor(a);
    successor(a);
}