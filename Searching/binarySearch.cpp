#include<iostream>
using namespace std;

int search(int arr[],int size,int target){
    int lo=0;
    int hi=size-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target)return mid;
        else if(arr[mid]>target)hi=mid-1;
        else lo=mid+1;
    }
    return -1;
}//time complexity O(logn)
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int n;
    cin>>n;
    int idx=search(arr,size,n);
    cout<<idx;
}