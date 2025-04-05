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

int level(Node*root){
    if(root==NULL)return 0;  //important
    return 1+max(level(root->left),level(root->right));
}
void helper(Node*root,int &maxDia){
    if(root==NULL)return;
    int dia=level(root->left)+level(root->right);
    maxDia=max(maxDia,dia);
    helper(root->left,maxDia);
    helper(root->right,maxDia);
}
int dia(Node*root){
    int maxDia=0;
    helper(root,maxDia);
    return maxDia;
}

bool issame(Node*a,Node*p){
    if(a==NULL &&p==NULL)return true;
    if(a==NULL || p==NULL)return false;
    if(a->val!=p->val)return false;
    
    bool leftans=issame(a->left,p->left);
    if(leftans==false)return false;
    bool rightans=issame(a->right,p->right);
    if(rightans==false)return false;

    return true;
} 

Node* invert(Node*&root){
    if(root==NULL)return NULL;
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    invert(root->left);
    invert(root->right);
}
void helper(Node*root,string s,vector<string>&ans){
    if(root==NULL)return;
    string a=to_string(root->val);
    if(root->left==NULL &&root->right==NULL){
        s+=a;
        ans.push_back(s);
    }
    helper(root->left,s+a+"->",ans);
    helper(root->right,s+a+"->",ans);
}
vector<string> binarypaths(Node*root){
    vector<string>ans;
    helper(root,"",ans);
    return ans;
}
bool exists(Node*root,Node*tar){
    if(root==NULL)return false; //important
    else if(root==tar)return true;
    return exists(root->left,tar) ||exists(root->right,tar);
}
Node*lowestCommonAN(Node*root,Node*p,Node*q){
if(root==p || root==q)return root;
else if(exists(root->left,p)&&exists(root->right,q))return root;
else if(exists(root->right,p)&&exists(root->left,q))return root;
else if(exists(root->left,p)&&exists(root->left,q))return lowestCommonAN(root->left,p,q);
else return lowestCommonAN(root->right,p,q);
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
cout<<dia(a);
cout<<endl;
Node*p=new Node(1);
Node*q=new Node(2);
Node*r=new Node(3);
Node*s=new Node(4);
Node*t=new Node(5);
Node*u=new Node(6);
// Node*v=new Node(7);
p->left=q;
p->right=r;
q->left=s;
q->right=t;
r->left=u;
// r->right=v;
cout<<issame(a,p);
invert(a);
cout<<endl;
vector<string>str=binarypaths(a);
for(int i=0;i<str.size();i++){
    cout<<str[i]<<"       ";
}
cout<<endl;
Node*ut=lowestCommonAN(a,e,d);
cout<<ut->val;
}