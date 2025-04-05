#include<iostream>
using namespace std;


int main(){
    int arr[]={4,3,6,78,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
     int minele=INT_MAX;
     int idx=-1;
     for(int j=i;j<n;j++){
        if(arr[j]<minele){
            minele=arr[j];
            idx=j;
        }
     }
     swap(arr[idx],arr[i]);
    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
}