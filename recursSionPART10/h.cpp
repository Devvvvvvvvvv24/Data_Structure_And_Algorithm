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
Node* levelOrder(int arr[],int n){    
    queue<Node*>q;
    Node*root=new Node(arr[0]);
    int i=1;
    int j=2;
    while(q.size()>0 && i<n) {
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
        // temp->left=l;
        // temp->right=r;
        i+=2;
        j+=2;
    }
    return root;
}
void levelorder(Node*root){
    queue<Node*>q;
    if(root)q.push(root);
    while(q.size()>0){
        Node*temp=q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
}
int main(){
    int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    Node*root=levelOrder(arr,n);
    levelorder(root);
}