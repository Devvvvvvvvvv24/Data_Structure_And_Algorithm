#include<iostream>
using namespace std;


int main(){
 int arr[]={4,3,1,4,2,3};
 int n=sizeof(arr)/sizeof(arr[0]);
 int j=0;
 for(int i=0;i<n;i++){
    for( j=0;j<n;j++){
        if(j!=i && arr[i]==arr[j])break;
    }
    if(j==n){
        cout<<arr[i]<<" ";
        break;
    }
 }
}