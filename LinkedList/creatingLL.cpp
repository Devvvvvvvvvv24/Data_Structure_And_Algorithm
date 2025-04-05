#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node*next;
       Node(int val){
          this->val=val;
          this->next=NULL;
    }
    
};
int main(){
    Node a(10);//declaration
    Node b(20);//intialisation
    Node c(30);
    Node d(40);
   //linking Nodes
    a.next=&b;
    b.next=&c;
    c.next=&d;
    cout<<(((a.next)->next)->next)->val<<endl;
    Node temp= a;
    while(temp!=NULL){
        cout<<temp.val<<" ";
        temp=*(temp.next);
    }
}