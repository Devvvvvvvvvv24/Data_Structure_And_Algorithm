#include<iostream>
using namespace std;


int main(){
    int arr[]={2,1,3,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j;
     for(j=0;j<n;j++){
        if(i!=j && arr[i]==arr[j] )break;
     }
     if(j==n)cout<<arr[i]<<" ";
    }
}