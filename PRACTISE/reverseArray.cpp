#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int arr2[n];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        arr2[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        cout<<arr2[i]<<" ";
    }
}