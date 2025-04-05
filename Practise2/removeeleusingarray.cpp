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
    int ele=arr[idx];
    if(ele==1)remove(arr,n,v,idx+1);
    else{
        v.push_back(ele);
        remove(arr,n,v,idx+1);
    }
}
int main(){
    int arr[]={1,2,2,3,1,23,2,1,2,3,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    remove(arr,n,v,0);
}