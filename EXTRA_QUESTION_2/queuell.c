#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void push(int val){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(rear==NULL && front==NULL){
        rear=front=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void pop(){
    if(front==NULL){
        printf("underflow");
    }
    else{
        printf("%d",front->data);
        struct node*temp;
        temp=front;
        front=front->next;
        free(temp);
    }
}

void display(){
    struct node*temp;
    temp=front;
    while(temp!=NULL){
        printf(" %d ",temp->data);
        temp=temp->next;
    }
}
void peek(){
    if(front==NULL &&rear==NULL){
        printf("underflow");
    }
    else{
        printf("%d",front->data);
    }
}

int main(){

push(2);
push(4);
push(5);
// peek();
// pop();
push(6);
push(66);
display();
}