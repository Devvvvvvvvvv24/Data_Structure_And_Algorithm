#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
struct node*head=NULL;

void insertatbign(int val){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(head==NULL){
        head=newnode;
    }
    else{
        newnode->next=head;
        head=newnode;
    }
}

void deleteatend(){
    struct node*temp;
    temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}


void insertattail(int val){
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
temp->next=newnode;
}
void insertatindex(int val, int idx){
    struct node*newnode,*temp;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    temp=head;
    int i=1;
    int q=idx-1;
    while(i<q){
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void deleteatbign(){
    struct node*temp;
    if(head==NULL){
        printf("The list is empty");
    }
    else{
        temp=head;
        head=head->next;
        free(temp);
    }
}



void deleteatindex(int idx){
    struct node*temp,*current;
    temp=head;
    int i=1;
    int q=idx-1;
    while(i<q){
        temp=temp->next;
    }
    current=temp->next;
    temp->next=current->next;
    free(current);
}

void display(){
    struct node*temp;
    temp=head;
    if(head==NULL){
        printf("The list is empty");
    }
    else{
        while(temp!=NULL){
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}

int main(){
    insertatbign(2);
    insertatbign(1);
    insertattail(3);
    insertattail(4);
    insertatbign(0);
    insertatindex(7,2);
    display();
    printf("\n");
//    deleteatbign();
//    deleteatend();
  deleteatindex(2);
    printf("The updated list ");
    display();
}