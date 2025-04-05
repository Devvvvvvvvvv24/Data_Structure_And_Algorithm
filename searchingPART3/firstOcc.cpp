#include<iostream>
using namespace std;



int main(){
    int arr[]={1,1,1,1,2,2,3,3,4,5,5,6,6,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int idx=-1;
    int tar=1;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;

        if(arr[mid]==tar){
            if(arr[mid-1]==tar){
                hi=mid-1;
            }
            else{
                idx=mid;
                break;
            }
        }
        else if(arr[mid]>tar)hi=mid-1;
        else lo=mid+1;
    }
    cout<<idx;
}