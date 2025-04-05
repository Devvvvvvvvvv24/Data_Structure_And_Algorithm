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
            cout<<"queue is full"<<endl;
            return;
        }
        arr[b]=val;
        b++;
      }
      void pop(){
        if(b-f==0){
         cout<<"queue is empty"<<endl;
         return;
        }
        f++;
      }
      int top(){
        if(b-f==0){
            cout<<"queue is emptty"<<endl;
            return -1;
        }
        return arr[f];
      }
      int back(){
        if(b-f==0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[b-1];
      }
      bool empty(){
        if(b-f==0)return true;
        else return false;
      }
      int size(){
        return b-f;
      }
      void display(){
        for(int i=f;i<b;i++){
          cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
};
int main(){
Queue qq;
qq.push(1);
qq.push(2);
qq.push(3);
qq.push(4);
qq.push(5);
cout<<qq.top()<<endl;
cout<<qq.size()<<endl;
qq.pop();
cout<<qq.back()<<endl;
cout<<qq.top()<<endl;
qq.display();
}