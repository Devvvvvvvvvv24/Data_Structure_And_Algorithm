#include<iostream>
using namespace std;

void heapify(int arr[],int n,int i){
    int largest=i;
    int lc=2*i+1;
    int rc=2*i+2;
    if(lc<n && arr[largest]<arr[lc]){
    largest=lc;
    }
    if(rc<n && arr[largest]<arr[rc]){
        largest=rc;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);

        heapify(arr,i,0);
    }
}
int main(){
    int arr[]={6,9,2,1,9,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    heapSort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}