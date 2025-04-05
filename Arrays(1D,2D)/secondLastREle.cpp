#include<iostream>
using namespace std;

int secondlast(int arr[],int n){
    int max1=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 &&arr[i]!=max1){
            max2=arr[i];
        }
    }
    return max2;
}

int main(){
    int arr[]={1,2,3,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondlast(arr,n);
}