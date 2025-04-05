#include<bits/stdc++.h>
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
int minn(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minn(root->left),minn(root->right)));
}

int main(){
Node*a=new Node(40);
Node*b=new Node(30);
Node*c=new Node(50);
Node*d=new Node(25);
Node*e=new Node(35);
Node*f=new Node(45);
Node*g=new Node(60);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
cout<<minn(a)<<endl;
}