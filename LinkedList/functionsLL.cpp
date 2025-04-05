#include<iostream>
using namespace std;
class Node{ //CLASS OF DATA TYPE
    public:
    int val;
    Node*next;
    Node(int val){
   this->val=val;
   this->next=NULL;
  }
};

class LinkedList{  //CLASS OF DATA STRUCTURE
   public:
   Node*head;
   Node*tail;
   int size;
   LinkedList(){
    head=tail=NULL;
    size=0;
   }
  void insertATtail(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    tail->next=temp;
    tail=temp;
   
}
 size++;
  }
  void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULLL"<<endl;
  }

  void insertAThead(int val){
    Node*temp=new Node(val);
    if(size==0)head=tail=temp;
    else{
        temp->next=head;
        head=temp;
    }
    size++;
  }
  void insertATpos(int idx,int val){
    if(idx<0 ||idx>size) cout<<"invalid index "<<endl;
    else if(idx==0)insertAThead(val);
    else if(idx==size)insertATtail(val);
    else{
        Node*t=new Node(val);
        Node*temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
    }
  }
  int getele(int idx){
    if(idx<0 ||idx>size){
         cout<<"invalid index "<<endl;
         return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size)return tail->val;
    else{
        Node*temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
  }
};

int main(){
LinkedList ll;
ll.insertATtail(10);
ll.display();
cout<<ll.size<<endl;
ll.insertATtail(20);
ll.display();
ll.insertATtail(30);
ll.display();
cout<<ll.size<<endl;
ll.insertAThead(1);
ll.display();
cout<<ll.size<<endl;
ll.insertATpos(1,33);
ll.display();
cout<<ll.getele(1)<<endl;

}