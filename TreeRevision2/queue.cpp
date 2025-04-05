#include<iostream>
#include<queue>
#include<unordered_map>
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

void levelOrder(Node*root){
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


void topView(Node*root){
    unordered_map<int,int>map;
    queue< pair<Node*,int> >q;
    pair<Node*,int>r;
    r.first=root;
    r.second=0;
    q.push(r);
    while(q.size()>0){
        Node*temp=(q.front()).first;
        int level=(q.front()).second;
        q.pop();
        if(map.find(level)==map.end()){
            map[level]=temp->val;
        }
        if(temp->left){
            pair<Node*,int>p;
            p.first=temp->left;
            p.second=level-1;
            q.push(p);
        }
        if(temp->right){
            pair<Node*,int>p;
            p.first=temp->right;
            p.second=level+1;
            q.push(p);
        }
    }
    int maxlevel=INT_MIN;
    int minlevel=INT_MAX;
    for(auto ele :map ){
        int ll=ele.first;
        maxlevel=max(maxlevel,ll);
        minlevel=min(minlevel,ll);
    }
    for(int i=minlevel;i<=maxlevel;i++){
      cout<<map[i]<<" ";
    }
}
int main(){
    // traversequeue(a);
int arr[]={1,2,3,4,5,INT_MIN,6,INT_MIN,INT_MIN,7,8,9};
int n=sizeof(arr)/sizeof(arr[0]);
// Node*node=construct(arr,n);
    Node*root=construct(arr,n);
    levelOrder(root);
    cout<<endl;
    topView(root);

}