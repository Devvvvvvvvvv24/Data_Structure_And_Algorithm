#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            arr[i]+=arr[j];
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}