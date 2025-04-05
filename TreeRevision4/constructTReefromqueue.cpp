#include<bits/stdc++.h>
using namespace std;

Node*construct(int arr[],int n){
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
        else l=NULL
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
    int arr[]={};
    int n=sizeof(arr)/sizeof(arr[0]);
    construct(arr,n);
}