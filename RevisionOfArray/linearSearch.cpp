#include<iostream>
using namespace std;

void reversepart(int *arr,int i,int j){
    // int i=a;
    // int j=b;
    while(i<j){
    swap(arr[i],arr[j]);
    i++;
    j--;
    }

}
int main(){
    int arr[]={2,3,4,1,2,4,5,6,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    if(k>n)k=k%n;
    reversepart(arr,n-k,n-1);
    reversepart(arr,0,n-k-1);
    reversepart(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}