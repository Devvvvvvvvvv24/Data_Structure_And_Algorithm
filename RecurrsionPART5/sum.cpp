#include<iostream>
using namespace std;

int sum(int i,int n){
    if(i>n)return 0;
    return i+sum(i+1,n);
}
int main(){
    cout<<sum(1,2);
}