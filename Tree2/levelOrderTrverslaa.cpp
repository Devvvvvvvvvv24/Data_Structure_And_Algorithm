#include<iostream>
#include<queue>
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
void helper(Node*root,int curr,int level){
    if(root==NULL)return;
    if(curr==level){
     cout<<root->val<<" ";
        return;
    }
    helper(root->left,curr+1,level);
    helper(root->right,curr+1,level);
}
void helperreverse(Node*root,int curr,int level){
    if(root==NULL)return;
    if(curr==level){
     cout<<root->val<<" ";
        return;
    }
    helper(root->right,curr+1,level);
    helper(root->left,curr+1,level);
}
void levelOrderOrder(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        helperreverse(root,1,i);
        cout<<endl;
    }
}

void levelOrderBFS(Node*root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node* temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    cout<<endl;
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
cout<<endl;
// display(a);
// cout<<endl;
// levelOrderOrder(a);
cout<<endl;
levelOrderBFS(a);
}