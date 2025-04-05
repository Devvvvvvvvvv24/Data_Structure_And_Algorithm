#include<iostream>
using namespace std;

void merge(int *arr,int n,int *arr2,int n2,int *arr3){
    int i=0;
    int j=0;
    int k=0;
    while(i<n && j<n2 ){
        if(arr[i]<=arr2[j])arr3[k++]=arr[i++];
        else arr3[k++]=arr2[j++];
    }
    if(i==n){
        while(j<n2)arr3[k++]=arr2[j++];
    }
    if(j==n2){
        while(i<n)arr3[k++]=arr[i++];
    }
}
void mergeee(int arr[],int n){
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    int arr1[n1],arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[i+n1];
    }
    mergeee(arr1,n1);
    mergeee(arr2,n2);
    merge(arr1,n1,arr2,n2,arr);
}
int main(){
    int arr[]={1,3,5,6,7,8,2,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    mergeee(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}