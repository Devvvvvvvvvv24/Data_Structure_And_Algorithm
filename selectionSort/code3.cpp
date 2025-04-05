#include<iostream>
using namespace std;

int main(){
    int arr[]={3,1,2,5,6,7,9,5,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int minn=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){//important
            if(arr[j]<minn){
                minn=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}