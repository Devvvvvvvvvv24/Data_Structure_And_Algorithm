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