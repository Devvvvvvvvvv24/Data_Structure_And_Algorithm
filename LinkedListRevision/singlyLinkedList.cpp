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
class linkedList{
    public:
    Node*head;
    Node*tail;
    int s;
    linkedList(){
        head=tail=NULL;
        s=0;
    }
    void insertAthead(int val){
        Node*temp=new Node(val);
        if(s==0){
            head=tail=temp;
            s++;
            return;
        }
        temp->next=head;
        head=temp;
        s++;
    }
    void insertAttail(int val){
        Node*temp=new Node(val);
        if(s==0){
            head=tail=temp;
            s++;
            return;
        }
        tail->next=temp;
        tail=temp;
        s++;
    }
  void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
  }
  void insertAtidx(int val,int idx){
    Node*node=new Node(val);
    if(idx==0)insertAthead(val);
    else if(idx==s)insertAttail(val);
    else{
        Node*temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        node->next=temp->next;
        temp->next=node;
        s++;
    }
  }
  int getatIDX(int idx){
    Node*temp=head;
    for(int i=1;i<=idx;i++){
      temp=temp->next;
    }
    return temp->val;
  }
    void deletefromhead(){
        if(s==0){
            head=tail=NULL;
            return;
        }
        Node*temp=head;
        head=head->next;
        delete(temp);
        s--;
    }
  void deletefromtail(){
    Node*temp=head;
    while(temp->next->next!=NULL){
      temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    s--;
  }
  void deletefromidx(int idx){
  Node*temp=head;
  for(int i=1;i<idx;i++){
    temp=temp->next;
  }
  temp->next=temp->next->next;
  s--;
  }
};
int main(){
linkedList ll;
ll.insertAthead(2);
ll.insertAthead(1);
ll.display();
cout<<endl;
ll.insertAttail(3);
ll.insertAttail(4);
ll.display();
cout<<endl;
ll.insertAtidx(222,2);
ll.display();
cout<<endl;
cout<<ll.s<<endl;
ll.deletefromhead();
ll.display();
cout<<endl;
ll.deletefromtail();
ll.display();
cout<<endl;
ll.deletefromidx(1);
ll.display();
cout<<endl;
cout<<ll.getatIDX(0);
cout<<ll.s;
}