#include<iostream>
using namespace std;

void reverse(int arr[],int n,int idx){
    if(idx==n)return;
    reverse(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int arr[]={1,2,3,4,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverse(arr,n,0);
}