#include<iostream>
using namespace std;

int maxi(int arr[],int n,int idx){
    if(idx==n)return INT_MIN;
    return max(arr[idx],maxi(arr,n,idx+1));
}
int main(){
    int arr[]={6,5,4,21,5,7,8,64,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<maxi(arr,n,0);
}