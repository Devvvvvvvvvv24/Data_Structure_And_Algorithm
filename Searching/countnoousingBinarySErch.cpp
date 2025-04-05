#include<iostream>
using namespace std;


int main(){
    int arr[]={0,0,0,0,1,1,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int firstidx=-1;
    int lo=0;
    int x=1;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(mid==0){
                firstidx=mid;
                break;
            }
            else if(arr[mid-1]!=x){
                firstidx=mid;
                break;
            }
            else hi=mid-1;
        }
        else if(arr[mid]>x)hi=mid-1;
        else lo=mid+1;
    }
    if(firstidx==-1)cout<<0;
    else cout<<n-firstidx;
}