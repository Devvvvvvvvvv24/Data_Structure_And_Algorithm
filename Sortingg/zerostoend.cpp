#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[]={5,0,1,4,0,6,0,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
}