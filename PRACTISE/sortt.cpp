#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={19,3,56,43,86,50,47};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    int x=0;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
         int mine=INT_MAX;
           int minidx=-1;
        for(int j=0;j<n;j++){
            if(v[j]==1)continue;
            else{
            if(arr[j]<mine){
              mine=arr[j];
              minidx=j;
            }
        }
        }
        arr[minidx]=x;
        v[minidx]=1;
        x++;
    }
    
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  }
