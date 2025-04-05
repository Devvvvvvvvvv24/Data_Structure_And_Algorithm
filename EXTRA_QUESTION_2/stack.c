#include<stdio.h>
#define n 5
int s[n];
int top=-1;

void push(int val){
    if(top>=n-1){
        printf("overflow");
    }
    else{
        top++;
        s[top]=val;
    }
}

    int pop(){
     if(top==-1){
    printf("underflow");
}
else{
    return s[top--];
}
}
int peek(){
    if(top==-1){
        printf("underflow");
    }
    else{
        return s[top];
    }
}

void display(){
    if(top==-1){
  printf("underflow");
    }
    else{
        for(int i=0;i<=top;i++){
            printf("%d",s[i]);
        }
    }
}
int main(){
    push(1);
    push(2);
    push(3);
    printf("%d",pop());
    display();
}