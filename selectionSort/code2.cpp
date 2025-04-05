#include<iostream>
using namespace std;

int main(){
    int arr[]={4,2,3,5,6,7,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int minn=INT_MAX;
        int min_idx=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<minn){
                minn=arr[j];
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}