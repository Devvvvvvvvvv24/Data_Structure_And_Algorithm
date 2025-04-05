#include<iostream>
#include<vector>
using namespace std;

void remove(int arr[],int n,vector<int>&v,int idx){
    if(idx==n){
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
      }
      return;
    }
    int ch=arr[idx];
    if(ch==1)remove(arr,n,v,idx+1);
    else{
        v.push_back(arr[idx]);
        remove(arr,n,v,idx+1);
    }
}
int main(){
    int arr[]={2,1,3,1,1,2,3,4,5,1,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    remove(arr,n,v,0);
}