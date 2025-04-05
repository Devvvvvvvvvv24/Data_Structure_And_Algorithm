#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,1,2,4,5,6,7,8,5,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    //selection SORT
    //TC=O(N^2)
    //SC=O(1)
    for(int i=0;i<n-1;i++){
        int minele=INT_MAX;
        int minIdx=-1;
        for(int j=i+1;j<n;j++){
            if(minele>arr[j]){
                minele=arr[j];
                minIdx=j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}