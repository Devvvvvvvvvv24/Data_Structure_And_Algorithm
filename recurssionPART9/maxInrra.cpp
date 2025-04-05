#include<iostream>
using namespace std;

int maxi(int arr[],int n,int idx){
if(idx==n)return INT_MIN;
return max(arr[idx],maxi(arr,n,idx+1));
}
int main(){
    int arr[]={2,3,1,5,6,3,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<maxi(arr,n,0);
}