#include<iostream>
using namespace std;


int main(){
    int arr[]={5,1,3,0,4,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int count=0;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])count++;
        }
    }
    cout<<count;
}