#include<iostream>
using namespace std;

void deletee(int *arr,int& n,int idx){
    for(int i=idx;i<=n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    deletee(arr,n,2);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}