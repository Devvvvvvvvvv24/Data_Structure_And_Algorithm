#include<iostream>
using namespace std;

int main(){
    int arr[]={5,4,2,7,8,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        arr[i]+=arr[i-1];
    }
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}