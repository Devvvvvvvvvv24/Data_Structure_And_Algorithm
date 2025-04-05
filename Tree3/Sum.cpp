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

int sum(Node*root){
    if(root==NULL) return 0;
    return root->val+sum(root->left)+sum(root->right);
}

int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}

int maxx(Node*root){
    if(root==NULL)return INT_MIN;
    int lmax=maxx(root->left);
    int rmax=maxx(root->right);
    return max(root->val,max(lmax,rmax));
}
int minn(Node*root){
    if(root==NULL)return INT_MAX;
    int lmin=minn(root->left);
    int rmin=minn(root->right);
    return min(root->val,min(lmin,rmin));
}
int prod(Node*root){
    if(root==NULL)return 1;
    return root->val*prod(root->left)*prod(root->right);
}

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void nthlevel(Node*root,int curr,int level){
    if(root==NULL)return;
    if(curr==level){
        cout<<root->val<<" ";
        return;
    }
    nthlevel(root->right,curr+1,level);
    nthlevel(root->left,curr+1,level);
    
}

void level(Node*root){
    int n=levels(root);
    for(int i=1;i<=n;i++){
        nthlevel(root,1,i);
        cout<<endl;
    }
}
void levell(Node*root){
queue<Node*>q;
q.push(root);
while(q.size()>0){
    Node*temp=q.front();
    q.pop();
    cout<<temp->val<<" ";
    if(temp->left!=NULL)q.push(temp->left);
    if(temp->right!=NULL)q.push(temp->right);
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
display(a);    
cout<<endl;
cout<<sum(a)<<endl;
cout<<size(a)<<endl;
cout<<maxx(a)<<endl;
cout<<minn(a)<<endl;
cout<<prod(a)<<endl;
cout<<levels(a)<<endl;

// nthlevel(a,1,2);
// height of tree=level-1;
level(a);
levell(a);
}