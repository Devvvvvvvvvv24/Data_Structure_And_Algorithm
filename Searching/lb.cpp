#include<iostream>
using namespace std;

int main(){
    int arr[]={1,3,5,7,9,11,13,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int x=90;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            cout<<arr[mid-1];
            flag=true;
            break;
        }
        else if(arr[mid]<x)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<arr[hi]<<" ";
}