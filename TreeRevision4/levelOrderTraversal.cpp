#include<iostream>
#include<vector>
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

int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void nthlevel(Node*root,int curr,int level,vector<int>&v){
    if(root==NULL)return;
    if(curr==level){
        v.push_back(root->val);//important 
        return;
    }
    nthlevel(root->left,curr+1,level,v);
    nthlevel(root->right,curr+1,level,v);
}
// void helper(Node*root,vector< vector <int>& ans){
// int n=levels(root);
// for(int i=1;i<=n;i++){
//     vector<int>v;
//     nth(root,1,i,v);
//     ans.push_back(v);
// }
// }

// vector<vector<int> levelOrder(Node*root){
// vector<vector<int>ans;
// helper(root,ans);
// return ans;
// }

void levelOrderqueue(Node*root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
        // cout<<endl;
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
// vector<vector<int>vv=levelOrder(a);
// for(int i=0;i<vv.size();i++){
//     cout<<vv[i]<<" ";
// }

levelOrderqueue(a);
}