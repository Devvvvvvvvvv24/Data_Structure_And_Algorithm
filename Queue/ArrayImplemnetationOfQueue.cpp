#include<iostream>
using namespace std;

class Queue{
    public:
    int f;
    int b;
    int arr[5];
    Queue(){
        f=0;
        b=0;
    }
    void push(int val){
        if(b==5){
            cout<<"overflow condition"<<endl;
            return;
        }
        arr[b]=val;
        b++;
    }
    void pop(){
        if(b-f==0){
            cout<<"underflow condition"<<endl;
            return;
        }
        f++;
    }
    int front(){
        if(b-f==0){
            cout<<"underflow condition "<<endl;
            return -1;
        }
        return arr[f];
    }
    int back(){
        if(b-f==0){
            cout<<"underflow condition "<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){
        return b-f;
    }
    bool empty(){
        if(b-f==0)return true;
        else false;
    }
    void display(){
        for(int i=f;i<b;i++){  //important
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

int main(){
Queue q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.display();
q.push(60);
cout<<q.front()<<endl;
q.pop();
q.pop();
q.display();
}