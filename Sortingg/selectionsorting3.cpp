#include<bits/stdc++.h>
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
int arr[]={4,3,1,2,6,5};
int n=6;
for(int i=0;i<n-1;i++){
    int min=INT_MAX;
    int minidx=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            minidx=j;
          //  cout<<min<<endl;
        }
    }
    swap(arr[i],arr[minidx]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}