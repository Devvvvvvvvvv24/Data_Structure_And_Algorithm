#include<iostream>
using namespace std;

int main(){
    int arr[]={3,4,5,21,3,4,6,34,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
        int minele=INT_MAX;
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<minele){
                minele=arr[j];
                minidx=j;
            }
        }
        swap(arr[i],arr[minidx]);//swap with first ele of
                                 //unsorted window
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
            }
}