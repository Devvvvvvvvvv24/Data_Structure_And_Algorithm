#include<iostream>
using namespace std;

void reversepart(int i,int j,int arr[]){
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=1;
    k=k%n;
    reversepart(n-k,n-1,arr);
    reversepart(0,n-k-1,arr);
    reversepart(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}