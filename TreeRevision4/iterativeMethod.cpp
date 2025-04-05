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
    st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right!=NULL)st.push(temp->right);
        if(temp->left!=NULL)st.push(temp->left);
    }
}
void inorder(Node*root){
    stack<Node*>st;
    Node*node=root;
    // st.push(root);
    while(st.size()>0 || node!=NULL){
    if(node!=NULL){
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
vector<int> postorder(Node*root){
    stack<Node*>st;
    vector<int>ans;
    st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        ans.push_back(temp->val);
        if(temp->left!=NULL)st.push(temp->left);
        if(temp->right!=NULL)st.push(temp->right);
    }
    reverse(ans.begin(),ans.end());
    return ans;
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
vector<int>s;
s=postorder(a);
for(int i=0;i<s.size();i++){
    cout<<s[i]<<" ";
}
cout<<endl;
inorder(a);
}