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
void levelOrder(Node*root){
  int n=levels(root);
  for(int i=0;i<n;i++){
    helper(root,0,i);
    cout<<endl;
  }
//   cout<<endl;
}
void insertion(Node*root,int val){
    if(root==NULL) root=new Node(val);
    else if(root->val>val){
        if(root->left==NULL){
            root->left=new Node(val);
        }
        else insertion(root->left,val);
    }
    else{
        if(root->right==NULL){
            root->right=new Node(val);
        }
        else insertion(root->right,val);
    }
}
int main(){
Node*a=new Node(10);
Node*b=new Node(5);
Node*c=new Node(15);
Node*d=new Node(4);
Node*e=new Node(7);
Node*f=new Node(13);
Node*g=new Node(20);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
// levelOrder(a);
insertion(a,11);
levelOrder(a);
}