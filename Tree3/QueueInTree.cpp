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

Node*contruct(int arr[],int n){
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
     if(j!=n&& arr[j]!=INT_MIN)r=new Node(arr[j]);
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
void levelTraverse(Node*root){
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
    //CREATED NODES
//   Node*a=new Node(1);
//   Node*b=new Node(2);
//   Node*c=new Node(3);
//   Node*d=new Node(4);
//   Node*e=new Node(5);
//   Node*f=new Node(6);
//   Node*g=new Node(7);
// //connections
//   a->left=b;
//   a->right=c;
//   b->left=d;
//   b->right-e;
//   c->left=f;
//   c->right=g;  
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
Node*a=contruct(arr,n);
 //LEVEL ORDER PRINTING USING A QUEUE
 levelTraverse(a);
}