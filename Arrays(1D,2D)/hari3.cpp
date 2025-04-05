#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==k)idx=i;
    }
    for(int i=idx;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}