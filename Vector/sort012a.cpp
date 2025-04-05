#include<iostream>
using namespace std;

void sort012(int arr[],int n){
    int noz=0;
    int noO=0;
    int notw=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)noz++;
        else if(arr[i]==1)noO++;
        else notw++;
    }
    //filling elements
    for(int i=0;i<n;i++){
        if(i<noz)arr[i]=0;
        else if(i<(noz+noO))arr[i]=1;
        else arr[i]=2;
    }
}
int main(){
    int arr[]={2,0,1,2,0,0,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n); 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
            }
}