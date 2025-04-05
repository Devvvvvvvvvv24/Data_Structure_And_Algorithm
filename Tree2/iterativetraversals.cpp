#include<iostream>
#include<stack>
#include<vector>

#include<algorithm>
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
void preorder(Node*root){
    stack<Node*>st;
    if(root)st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right)st.push(temp->right);
        if(temp->left)st.push(temp->left);
    }
}
vector<int> postorder(Node*root){
    vector<int>v;
    stack<Node*>st;
    if(root)st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        v.push_back(temp->val);
        if(temp->left)st.push(temp->left);
        if(temp->right)st.push(temp->right);
    }
    reverse(v.begin(),v.end());
    return v;
}
void inorder(Node*root){
    stack<Node*>st;
    Node*node=root;
    while(st.size()>0 ||node){
        if(node){
            st.push(node);
            node=node->left;
        }
        else{
            Node*temp=st.top();
            st.pop();
            cout<<temp->val<<" ";
            node=temp->right;
        }
    }
}

void leftBoundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL)return;
    cout<<root->val<<" ";
    leftBoundary(root->left);
    if(root->left==NULL)leftBoundary(root->right);
}
void bottomBoundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    bottomBoundary(root->left);
    bottomBoundary(root->right);
}
void rightBoundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL)return;
    rightBoundary(root->right);
    if(root->right==NULL)rightBoundary(root->left);
    cout<<root->val<<" ";
}
void boundary(Node*root){
    leftBoundary(root);
    bottomBoundary(root);
    rightBoundary(root->right);
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
preorder(a);
cout<<endl;
vector<int> aa=postorder(a);
for(int i=0;i<aa.size();i++){
    cout<<aa[i]<<" ";
}
cout<<endl;
inorder(a);
cout<<endl;
boundary(a);
}