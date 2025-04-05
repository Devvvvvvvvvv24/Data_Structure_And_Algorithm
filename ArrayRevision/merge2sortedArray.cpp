#include<iostream>
using namespace std;

void mergearray(int arr[],int n,int arr2[],int n2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n &&j<n2){
        if(arr[i]<arr2[j])arr3[k++]=arr[i++];
        else arr3[k++]=arr2[j++];
    }
    if(i==n){
        while(j<n2)arr3[k++]=arr2[j++];
    }
    if(j==n2){
        while(i<n)arr3[k++]=arr[i++];
    }
}
int main(){
    int arr[]={2,4,6,8,9,11,14,16,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={1,3,4,5,6,7,8,10,12,15,16,20};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int z=n+n2;
    int arr3[z];
    mergearray(arr,n,arr2,n2,arr3);
    for(int i=0;i<z;i++){
        cout<<arr3[i]<<" ";
    }
}