#include<iostream>
using namespace std;

void sum(int arr[],int n,int &summ,int idx){
     if(idx==n)return;
     summ+=arr[idx];
     sum(arr,n,summ,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int summ=0;
    sum(arr,n,summ,0);
    cout<<summ;
}