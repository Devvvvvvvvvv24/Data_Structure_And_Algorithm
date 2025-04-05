#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,1,0,6,4,5,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    while(i<n){
        int correctidx=arr[i];
        if(arr[correctidx]==arr[i])i++;
        else swap(arr[correctidx],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}