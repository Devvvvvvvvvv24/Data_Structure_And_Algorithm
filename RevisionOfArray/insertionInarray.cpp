#include<iostream>
using namespace std;

void insert(int arr[],int n,int x,int idx){
    for(int i=n-1;i>=idx;i--){
           arr[i+1]=arr[i];
    }
    arr[idx]=x;
    n++;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=122;
    insert(arr,n,x,3);
    n++;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}