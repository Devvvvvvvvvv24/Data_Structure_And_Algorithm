#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,0,1,0,3,0,1,1,0,3,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=-1;
    //bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}