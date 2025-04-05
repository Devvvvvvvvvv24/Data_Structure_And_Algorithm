#include<iostream>
#include<queue>
#include<stack>
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
int sum(Node*root){
    if(root==NULL)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int prod(Node*root){
    if(root==NULL)return 1;
    return root->val*prod(root->left)*prod(root->right);
}
int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int maxvalue(Node*root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxvalue(root->left),maxvalue(root->right)));
}
int minvalue(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minvalue(root->left),minvalue(root->right)));
}
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}

void printnth(Node*root,int curr,int level){
    if(root==NULL)return;
    if(curr==level)
    {
        cout<<root->val<<" ";
        return;
    }
    printnth(root->left,curr+1,level);
    printnth(root->right,curr+1,level);
}
void level(Node*root){
    int n=levels(root);
    for(int i=0;i<n;i++){
        printnth(root,0,i);
        cout<<endl;
    }
}
void bfs(Node*root){
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
}

Node* construct(int arr[],int n){
    queue<Node*>q;
    Node*root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
   while(q.size()>0 && i<n){
    Node*temp=q.front();
    q.pop();
    Node*l;
    Node*r;
    if(arr[i]!=INT_MIN)l=new Node(arr[i]);
    else l=NULL;
    if(j!=n && arr[j]!=INT_MIN)r=new Node(arr[j]);
    else r=NULL;
    temp->left=l;
    temp->right=r;
    if(l)q.push(l);
    if(r)q.push(r);
    i+=2;
    j+=2;
   }
   return root;
}
void display(Node*root){
    if(root==NULL)return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}

void pre(Node*root){
    stack<Node*>st;
    if(root!=NULL)st.push(root);
    while(st.size()>0){
        Node*temp=st.top();
        st.pop();
        cout<<temp->val<<" ";
        if(temp->right)st.push(temp->right);
        if(temp->right)st.push(temp->left);
    }
}
vector<int> post(Node*root){
    stack<Node*>st;
    vector<int>v;
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
    // if(root)st.push(root);
    while(st.size()>0||node ){
        if(node){
            st.push(node);
            node=node->left;
        }
        else {
            Node*temp=st.top();
            st.pop();
            cout<<temp->val<<" ";
            node=temp->right;
        }
    }
}

void leftboundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL)return;
    cout<<root->val<<" ";

    leftboundary(root->left);
    if(root->left==NULL)leftboundary(root->right);
}
void bottomboundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL){
        cout<<root->val<<" ";
        return;
    }
    bottomboundary(root->left);
    bottomboundary(root->right);
}
void rightboundary(Node*root){
    if(root==NULL)return;
    if(root->left==NULL &&root->right==NULL)return;
    rightboundary(root->right);
    if(root->right==NULL)rightboundary(root->left);
    cout<<root->val<<" ";
}
void boundary(Node*root){
    leftboundary(root);
    bottomboundary(root);
    rightboundary(root->right);
}
int main(){
Node* a= new Node(1);
Node* b=new Node(2);
Node* c=new Node(3);
Node* d=new Node(4);
Node* e=new Node(5);
Node* f=new Node(6);
Node* g=new Node(7);
// Node* h=new Node(8);
a->left=b;
a->right=c;
b->left=d;
b->right=e;
c->left=f;
c->right=g;
// d->left=h;
cout<<sum(a)<<endl;
cout<<prod(a)<<endl;
cout<<size(a)<<endl;
cout<<maxvalue(a)<<endl;
cout<<minvalue(a)<<endl;
cout<<levels(a)<<endl;
// cout<<levels(a)<<endl;
//height=levels-1;
printnth(a,0,2);
cout<<endl;
level(a);
cout<<endl;
bfs(a);
cout<<endl;
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9,INT_MIN};
int n=sizeof(arr)/sizeof(arr[0]);
Node*root=construct(arr,n);
// display(root);
bfs(root);
cout<<endl;
pre(a);
cout<<endl;
vector<int> vv=post(a);
for(int i=0;i<vv.size();i++){
    cout<<vv[i]<<" ";
}
cout<<endl;
inorder(a);
cout<<endl;
boundary(a);
}