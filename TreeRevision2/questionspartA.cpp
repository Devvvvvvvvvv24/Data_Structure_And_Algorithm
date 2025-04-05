#include<bits/stdc++.h>
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
    if(root==NULL)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int maxx(Node*root){
    if(root==NULL)return INT_MIN;
    return max(root->val,max(maxx(root->left),maxx(root->right)));
}
int minn(Node*root){
    if(root==NULL)return INT_MAX;
    return min(root->val,min(minn(root->left),minn(root->right)));
}

int product(Node*root){
    if(root==NULL)return 1;
    return root->val*product(root->left)*product(root->right);
}

int diameterofBT(Node*root,int &ans){
    if(root==NULL)return 0;
    int leftans=diameterofBT(root->left,ans);
    int rightans=diameterofBT(root->right,ans);
    ans=max(ans,leftans+rightans+1);
    return 1+max(leftans,rightans);
}
int diameter(Node*root){
    int ans=0;
    diameterofBT(root,ans);
    return ans-1;
}

bool isSame(Node*a,Node*p){
    if(a==NULL &&p==NULL)return true;
    if(a==NULL || p==NULL)return false;
    if(a->val!=p->val)return false;

    bool leftans=isSame(a->left,p->left);
    if(leftans==false)return false;
    bool rightans=isSame(a->right,p->right);
    if(rightans==false)return false;

    return true;
}
Node*invert(Node*root){
    if(root==NULL)return NULL;
    Node*temp=root->left;
    root->left=root->right;
    root->right=temp;
    invert(root->left);
    invert(root->right);
    return root;//importanttttttttttttt
}

void helper(Node*root,string s,vector<string>&ans){
if(root==NULL)return;
string a=to_string(root->val);
if(root->left==NULL &&root->right==NULL){
    s+=a;
    ans.push_back(s);
    return;
}
helper(root->left,s+a+"->",ans);
helper(root->right,s+a+"->",ans);
}
vector<string> binaryPaths(Node*root){
    vector<string>ans;
    helper(root,"",ans);
    return ans;
}

bool exists(Node*root,Node*tar){
    if(root==NULL)return false;
    if(tar==root)return true;
    return exists(root->left,tar) ||exists(root->right,tar);
}
Node*lowestCommonAN(Node*root,Node*p,Node*q){
    if(root==p || root==q)return root;
    else if(exists(root->left,p) &&exists(root->right,q))return root;
    else if(exists(root->right,p) && exists(root->left,q))return root;
    else if(exists(root->left,p) &&exists(root->left,q))return lowestCommonAN(root->left,p,q);
    else return lowestCommonAN(root->right,p,q);
}

void preorder(Node*root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node*root){
    if(root==NULL)return;
    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}
void postorder(Node*root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->val<<" ";
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
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}
void traversequeue(Node*root){
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

Node* construct(int arr[],int n){
    queue<Node*>q;
    Node*root=new Node(arr[0]);
    q.push(root);
    int i=1;
    int j=2;
    while(q.size()>0 &&i<n){
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
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    }
    return root;
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
Node*p=new Node(1);
Node*q=new Node(2);
Node*r=new Node(3);
Node*s=new Node(4);
Node*t=new Node(5);
Node*u=new Node(6);
Node*v=new Node(7);
p->left=q;
p->right=r;
q->left=s;
q->right=t;
r->left=u;
r->right=v;
display(a);
cout<<endl;
cout<<sum(a)<<endl;
cout<<size(a)<<endl;
cout<<maxx(a)<<endl;
cout<<minn(a)<<endl;
cout<<levels(a)<<endl;
cout<<product(a)<<endl;
cout<<diameter(a)<<endl;
cout<<isSame(a,p)<<endl;
vector<string>ss=binaryPaths(a);
for(int i=0;i<ss.size();i++){
    cout<<ss[i]<<"   ";
}
cout<<endl;
Node*qq=lowestCommonAN(a,d,g);
cout<<qq->val<<endl;
preorder(a);
cout<<endl;
inorder(a);
cout<<endl;
postorder(a);
cout<<endl;
nthlevel(a,1,2);
cout<<endl;
// traversequeue(a);
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
Node*node=construct(arr,n);
traversequeue(node);
}
