#include<iostream>
using namespace std;

bool powerof(int n){
    if(n==1)return true;
    if(n%2!=0)return  false;
}
int main(){
    int n;
    cin>>n;
    cout<<powerof(n);
}