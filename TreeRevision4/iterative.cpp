#include<stack>
#include<algorithm>
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
void inorder(Node*root){
    stack<Node*>st;
    // if(root)st.push(root);
    Node*node=root;
    while(st.size()>0 || node){
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
vector<int> postoder(Node*root){
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
void pred(Node*root){
    if(root->left==NULL)return;
    else{
        Node*predd=root->left;
        while(predd->right!=NULL){
            predd=predd->right;
        }
        cout<<predd->val<<" ";
    }
}
void succ(Node*root){
if(root->right==NULL)return;
else {
    Node*temp=root->right;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    cout<<temp->val;

}
}
int main(){
Node*a=new Node(10);
Node*b=new Node(5);
Node*c=new Node(15);
Node*d=new Node(4);
Node*e=new Node(7);
Node*f=new Node(13);
Node*g=new Node(17);

a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
preorder(a);
cout<<endl;
inorder(a);
cout<<endl;
vector<int>vv=postoder(a);
for(int i=0;i<vv.size();i++){
    cout<<vv[i]<<" ";
}
cout<<endl;
boundary(a);
cout<<endl;
pred(a);
succ(a);
}