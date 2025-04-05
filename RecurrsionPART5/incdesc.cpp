#include<iostream>
using namespace std;


void print(int i,int n){
    if(i>n)return;
    cout<<i<<" ";
    print(i+1,n);
    if(i>1)cout<<--i<<" ";
}
int main(){
    print(1,4);
}