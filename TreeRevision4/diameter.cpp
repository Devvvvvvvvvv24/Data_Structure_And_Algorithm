
#include<iostream>
#include<vector>
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
void helper(Node*root,int &maxDia){
    if(root==NULL)return;
    int dia=levels(root->left)+levels(root->right);
    maxDia=max(maxDia,dia);
    helper(root->left,maxDia);
    helper(root->right,maxDia);
}
int diameter(Node*root){
    int maxDia=0;
    helper(root,maxDia);
    return maxDia;
}

bool issame(Node*a,Node*p){
if(a==NULL && p==NULL)return true;
if(p==NULL || a==NULL)return false;

    if(a->val!=p->val)return false;

    bool leftans=issame(a->left,p->left);
    if(leftans==false)return false;

    bool rightans=issame(a->right,p->right);
    if(rightans==false)return false;

    return true;
}

Node* invert(Node*root){
    if(root=NULL)return NULL;
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    invert(root->left);
    invert(root->right);
    return root;
}
void inorder(Node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

void helper(vector<string>&ans,string s,Node*root){
    if(root==NULL)return;
    string a=to_string(root->val);
    if(root->left==NULL &&root->right==NULL){
        s+=a;
        ans.push_back(s);
    }
    // ans.push_back(a);
    helper(ans,s+a+"->",root->left);
    helper(ans,s+a+"->",root->right);
}
vector<string> paths(Node*root){
    vector<string>ans;
    helper(ans,"",root);
    return ans;
}
bool  exists(Node*root,Node*tar){
    if(root==NULL)return false;
    if(root==tar)return true;
    return exists(root->left,tar)||exists(root->right,tar);
}
Node* lca(Node*root,Node*a,Node*p){
if(root==a ||root==p)return root;
else if(exists(root->left,a) &&exists(root->right,p))return root;
else if(exists(root->right,a) && exists(root->left,p))return root;
else if(exists(root->left,a)&&exists(root->left,p))return lca(root->left,a,p);
else return lca(root->right,a,p);
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
    // 1st tree
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

// 2nd tree
// Node*p=new Node(1);
// Node*q=new Node(2);
// Node*r=new Node(3);
// Node*s=new Node(4);
// Node*t=new Node(51);
// Node*u=new Node(6);
// Node*v=new Node(7);
// p->left=q;
// p->right=r;
// q->left=s;
// q->right=t;
// r->left=u;
// r->right=v;
// cout<<issame(a,p);
// cout<<endl;
// cout<<diameter(a);
// cout<<endl;
// invert(a);
// inorder(a);


// binaryPaths 
// vector<string>ab=paths(a);
// for(int i=0;i<ab.size();i++){
//     cout<<ab[i]<<"    ";
// }
// cout<<endl;
// Node*tt=lca(a,e,g);
// cout<<tt->val<<" ";
// }

nthlevel(a,1,3);

}