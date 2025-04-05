#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display(queue<int>&q){
    int n=q.size();
    for(int i=1;i<=n;i++){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}

void reverseq(queue<int>&q){
    stack<int>st;
    while(q.size()>0){
     st.push(q.front());
     q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

}

void deleteEvenindex(queue<int>&q){
    int n=q.size();
    for(int i=0;i<n;i++){
        if(i%2==0)q.pop();
        else{
            int x=q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    display(q);
//     cout<<q.front()<<endl;
//     q.pop();
//     cout<<q.size()<<endl;
//     display(q);
   reverseq(q);
   display(q);
   reverseq(q);
   display(q);
   deleteEvenindex(q);
   display(q);
}