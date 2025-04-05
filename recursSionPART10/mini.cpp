#include<iostream>
using namespace std;

void minn(int arr[],int n,int &mini,int idx){
    if(idx==n)return;
    mini=min(mini,arr[idx]);
   return minn(arr,n,mini,idx+1);
}
int main(){
    int arr[]={5,6,3,4,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);

    int mini=INT_MAX;
    minn(arr,n,mini,0);
    cout<<mini;
}