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

class LinkedList{
    public:
    Node*head;
    Node*tail;
    int size;
    LinkedList(){
        head=tail=0;
        size=0;
    }
    void insertAthead(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
            
        }
        else{
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void insertAttail(int val){
        Node*temp=new Node(val);
        if(size==0){
            head=tail=temp;
        }
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
    }
    void insertATpos(int idx,int val){
        if(idx<0 ||idx>size)cout<<"invalid size";
        else if(idx==0)insertAthead(val);
        else if(idx==size)insertAttail(val);
        else{
            Node*node=new Node(val);
            Node*temp=head;
            for(int i=1;i<idx;i++){
                temp=temp->next;
            }
            node->next=temp->next;
            temp->next=node;
            size++;
        }
    }
    void display(){
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->val<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int getlement(int idx){
        if(idx<0 ||idx>=size){
            cout<<"invalid idx";
            return -1;
        }
        else if(idx==0)return head->val;
        else if(idx==size-1)return tail->val;
        else {
        Node*temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;

        }
        return temp->val;
    }
    }
    void change(int val,int idx){
        Node*temp=head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        temp->val=val;
    }
    void deletefrombeg(){
        Node*temp=head;
        head=head->next;
        free(temp);
        size--;
    }
    void deletefromend(){
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
//        free(temp);
        size--;
        
    }
};
int main(){
    LinkedList ll;
    ll.insertAthead(10);
    ll.display();
    ll.insertAttail(33);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAthead(22);
    ll.display();
    ll.insertATpos(1,99);
    ll.display();
    cout<<ll.size<<endl;
    cout<<ll.getlement(3)<<endl;
    ll.change(222,1);
    ll.display();
    ll.deletefrombeg();
    ll.display();
    ll.deletefromend();
    ll.display();
}