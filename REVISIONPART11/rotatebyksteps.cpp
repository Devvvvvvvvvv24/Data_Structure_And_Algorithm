#include<iostream>
using namespace std;

void reversePart(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={5,3,1,7,8,15,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=2;
    if(k>n)k=k%n;
    reversePart(arr,0,n-k-1);
    reversePart(arr,n-k,n-1);
    reversePart(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}