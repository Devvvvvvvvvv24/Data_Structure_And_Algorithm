#include<iostream>
using namespace std;

int main(){
    int arr[]={1,0,1,0,4,2,3,4,8,0,9,8,4,0,0,2,8,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}