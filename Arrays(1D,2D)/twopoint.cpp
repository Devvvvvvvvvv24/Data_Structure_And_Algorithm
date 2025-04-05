#include<iostream>
#include<algorithm>
using namespace std;

void reverseee(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[]={3,1,4,5,2,3,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseee(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}