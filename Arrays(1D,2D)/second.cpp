#include<bits/stdc++.h>
using namespace std;

int secondlargest(int arr[],int n){
    int max1=INT_MAX;
    int max2=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]<max2 &&arr[i]!=max1){
              max2=arr[i];
        }
    }
    return max2;
}
int main(){
   int arr[]={4,1,11,23,3,22,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<secondlargest(arr,size);
}