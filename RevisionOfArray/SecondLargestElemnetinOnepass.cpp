#include<iostream>
using namespace std;
int secondlar(int*arr,int n){
    int largest=INT_MIN;
    int largest2=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest2=largest;
            largest=arr[i];
        }
        else if(arr[i]>largest2 && arr[i]!=largest){
            largest2=arr[i];
        }
    }
    return largest2;
}

int main(){
    int arr[]={4,3,1,5,7,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<secondlar(arr,n);
}