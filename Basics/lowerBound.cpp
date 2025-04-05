#include<iostream>
using namespace std;

int main(){
    int arr[]={1,4,6,9,13,15,17,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=16;
    int ans=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>target){
         ans=arr[i];
         break;
        }
    }
  cout<<ans;

}