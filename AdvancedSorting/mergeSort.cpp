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
int main(){
    int arr[]={1,4,7,9,11,12,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={2,3,5,6,7,8,10,11};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int n3=n+n2;
    int arr3[n3];
    merge(arr,n,arr2,n2,arr3);
   for(int i=0;i<n3;i++){
    cout<<arr3[i]<<" ";
   }
   cout<<endl;
}