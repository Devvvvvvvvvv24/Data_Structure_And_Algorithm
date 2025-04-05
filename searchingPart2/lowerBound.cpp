#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int target;
    cin>>target;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]>target)hi=mid-1;
        else lo=mid+1;
    }
    if(flag==false)cout<<hi;
}