#include<iostream>
using namespace std;

void mergee(int arr[],int n1,int arr2[],int n2,int arr3[],int n3){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr[i]<=arr2[j])arr3[k++]=arr[i++];
        else arr3[k++]=arr2[j++];
    }
    if(i==n1){
        while(j<n2)arr3[k++]=arr2[j++];
    }
    if(j==n2){
        while(i<n1)arr3[k++]=arr[i++];
    }
}
int main(){
    int arr[]={2,3,5,7,9,11,14,15};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={1,4,6,7,10,12,13};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n1+n2;
    int arr3[n3];
    mergee(arr,n1,arr2,n2,arr3,n3);
    for(int i=0;i<n3;i++){
        cout<<arr3[i]<<" ";
    }
}