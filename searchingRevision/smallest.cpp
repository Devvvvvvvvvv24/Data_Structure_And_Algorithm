#include<iostream>
using namespace std;

int main(){
    int arr[]={0,1,2,3,4,5,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int idxx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==arr[mid])lo=mid+1;
        else {
            idxx=mid;
            hi=mid-1;
        }
    }
    cout<<idxx;
}