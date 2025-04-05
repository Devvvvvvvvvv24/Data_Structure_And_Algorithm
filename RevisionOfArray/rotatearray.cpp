#include<iostream>
using namespace std;

void rotate(int arr[],int i,int j){
    while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    if(k>n)k=k%n;
    rotate(arr,0,n-k-1);
    rotate(arr,n-k,n-1);
    rotate(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}