#include<iostream>
using namespace std;

void reversePart(int i,int j,int arr[]){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int k=2;
    k=k%n;
    
    reversePart(0,n-k-1,arr);
    reversePart(n-k,n-1,arr);
    reversePart(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}