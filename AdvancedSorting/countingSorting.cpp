#include<iostream>
using namespace std;

int main(){
    int arr[]={45,32,12,45,78,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    while(i<n){
        int correctidx=arr[i]-1;
        if(arr[correctidx]==arr[i])i++;
        else swap(arr[i],arr[correctidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}