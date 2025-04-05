#include<iostream>
using namespace std;

int mini(int arr[],int n,int idx){
    if(idx==n)return INT_MAX;
    return min(arr[idx],mini(arr,n,idx+1));
}
int main(){
    int arr[]={2,4,6,1,2,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<mini(arr,n,0);
}