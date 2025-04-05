#include<iostream>
using namespace std;

void mergee(int arr1[],int n1,int arr2[],int n2,int arr[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])arr[k++]=arr1[i++];
        else arr[k++]=arr2[j++];
    }
    if(i==n1)while(j<n2)arr[k++]=arr2[j++];
    if(j==n2)while(i<n1)arr[k++]=arr1[i++];
}
void mergeSort(int arr[],int n){
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[i+n1];
    }
    mergeSort(arr1,n1);
    mergeSort(arr2,n2);

    mergee(arr1,n1,arr2,n2,arr);
}
int main(){
    int arr[]={5,4,6,7,8,2,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }