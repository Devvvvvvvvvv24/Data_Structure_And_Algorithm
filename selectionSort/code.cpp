#include<iostream>
using namespace std;

int main(){
    int arr[]={3,2,1,4,5,6,4,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int minele=INT_MAX;
        int min_idx=-1;
        for(int j=i+1;j<n;j++){
            if(arr[j]<minele){
                minele=arr[j];
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}