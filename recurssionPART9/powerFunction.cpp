#include<iostream>
using namespace std;

int poww(int x,int n){
    if(n==1){
        return x;
    }
    int ans=poww(x,n/2);
    if(n%2==0){
        return ans*ans;
    }
    else{
        return ans*ans*x;
    }
}
int main(){
    cout<<poww(2,3);
}