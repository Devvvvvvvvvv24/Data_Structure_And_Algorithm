#include<iostream>
using namespace std;


int main(){
    int arr[]={4,1,2,6,5};
    int n=5;
    for(int i=1;i<=n-1;i++){
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