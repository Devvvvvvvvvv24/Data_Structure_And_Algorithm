#include<iostream>
using namespace std;

int stairPath(int n){
    if(n==1)return 1;
    if(n==2)return 2;//2 way
    int ans=stairPath(n-1)+stairPath(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<stairPath(n);
}