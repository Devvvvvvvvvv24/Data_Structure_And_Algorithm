#include<iostream>
using namespace std;

int main(){
    int arr[]={0,2,1,0,0,0,0,2,1,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int mid=0;
    int hi=n-1;
    //   int mid=lo+(hi-lo)/2;
    while(mid<=hi){
      
        if(arr[mid]==0){
            swap(arr[mid],arr[lo]);
            lo++;
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[hi],arr[mid]);
            hi--;
        }
        else mid++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}