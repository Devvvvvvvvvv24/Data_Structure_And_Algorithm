#include<iostream>
using namespace std;
int main(){
    int arr[]={4,9,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }    
    cout<<sum<<" ";
}