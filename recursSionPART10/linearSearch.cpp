#include<iostream>
using namespace std;

int linear(int arr[],int n,int tar,int idx){
    if(idx==n)return -1;
    if(arr[idx]==tar)return idx;
    return linear(arr,n,tar,idx+1);
}
int main(){
    int arr[]={3,1,2,5,6,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tar=99;
    cout<<linear(arr,n,tar,0);
}