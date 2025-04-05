#include<iostream>
using namespace std;

int sum(int arr[],int n,int idx){
    if(idx==n)return  0;
    return arr[idx]+sum(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sum(arr,n,0);
}