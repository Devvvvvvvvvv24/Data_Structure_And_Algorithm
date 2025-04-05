#include<iostream>
using namespace std;

void sort012b(int arr[],int n){
   int lo=0;
   int mid =0;
   int hi=n-1;
   while(mid<=hi){
    if(arr[mid]==2){
        swap(arr[mid],arr[hi]);
        hi--;
    }
    else if(arr[mid]==0){
        swap(arr[mid],arr[lo]);
        lo++;
        mid++;
    }
    else mid++;
   }
}
int main(){
    int arr[]={1,0,2,2,1,0,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012b(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}