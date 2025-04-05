#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,2,2,2,3,3,3,4,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int x;
    cin>>x;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                cout<<mid;
                break;
            }
            else hi=mid-1;
        }
        else if(arr[mid]>x)hi=mid-1;
        else lo=mid+1;
    }

}