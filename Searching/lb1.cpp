#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,6,8,9,11,13,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int x=8;
    bool flag =false;
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
    if(flag==false)cout<<arr[hi];
}