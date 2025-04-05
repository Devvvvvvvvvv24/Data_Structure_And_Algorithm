#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    int idx=-1;
    int tar=4;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==tar){
            cout<<arr[mid-1];
            flag=true;
            break;
        }
        else if(arr[mid]>tar)hi=mid-1;
        else lo=mid+1;
    }
if(flag==false)cout<<arr[hi];
}