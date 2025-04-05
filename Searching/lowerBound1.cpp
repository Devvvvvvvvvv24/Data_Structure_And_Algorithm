#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,6,9,11,13};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x=4;

    int lo=0;
    int hi=size-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false){
        cout<<arr[hi]<<" ";
    }
}