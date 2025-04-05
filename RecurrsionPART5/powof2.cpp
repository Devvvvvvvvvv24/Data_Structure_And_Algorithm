#include<iostream>
using namespace std;

bool poww(int n){
    if(n==1)return true;
    if(n%2!=0)return false;
    return poww(n/2);
}
int main(){
    cout<<poww(81);
}