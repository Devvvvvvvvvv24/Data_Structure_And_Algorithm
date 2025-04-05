#include<iostream>
using namespace std;

int main(){
    int arr[]={5,3,4,6,7,8,9,1,7};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}