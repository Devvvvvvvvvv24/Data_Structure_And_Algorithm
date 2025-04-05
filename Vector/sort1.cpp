#include<iostream>
using namespace std;

void  sort1(int arr[],int n){
    int noz=0;
    int noO=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)noz++;
        else noO++;
        }
    // filling elements
    for(int i=0;i<n;i++){
        if(i<noz)arr[i]=0;
        else arr[i]=1;
    }
}
int main(){
    int arr[]={1,0,0,1,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    sort1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}