#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*top=NULL;

void push(int val){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=top;
    top=newnode;
}

void pop(){
    if(top==NULL){
        printf("underflow");
    }
    else{
        struct node*q;
        q=top;
        top=top->next;
        free(q);
    }
}

int peek(){
    if(top==NULL){
        printf("underflow");
    }
    else{
        return top->data;
    }
}

void display(){
    struct node*temp;
    temp=top;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    }

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printf("%d ",peek());

    pop();
    pop();
    display();
}