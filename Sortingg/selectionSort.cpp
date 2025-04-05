#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,2,6,3,7,5,8};
    int n=7;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minindx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minindx=j;
            }
        }
        swap(arr[i],arr[minindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}