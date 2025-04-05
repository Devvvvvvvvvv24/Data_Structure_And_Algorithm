#include<iostream>
using namespace std;

void merge(int *arr,int* arr2,int *arr3,int n1,int n2,int m){
    int i=n1-1;
    int j=n2-1;
    int k=m-1;
    while(i>=0 && j>=0){
        if(arr[i]>arr2[j]){
          arr3[k--]=arr[i--];
        }
        else{
            arr3[k--]=arr2[j--];
        }
    }
    if(i==0){
        while(j>0){
            arr3[k--]=arr2[j--];
        }
    }
    if(j==0){
        while(i>0){
            arr3[k--]=arr[i--];
        }
    }
}
int main(){
    int arr[]={1,4,7,9,13,16};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={2,3,5,6,8,10,20};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int m=n1+n2;
    int arr3[m];
    merge(arr,arr2,arr3,n1,n2,m);
    for(int i=0;i<m;i++){
        cout<<arr3[i]<<" ";
    }
}