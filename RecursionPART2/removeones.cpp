#include<iostream>
#include<vector>
using namespace std;

void remove(int arr[],int n,vector<int>&v,int idx){
    if(idx==n)return;
    int ele=arr[idx];
    if(ele==1)remove(arr,n,v,idx+1);
    else{
        v.push_back(arr[idx]);
        remove(arr,n,v,idx+1);
    }
    
}
int main(){
    int arr[]={1,2,3,1,2,1,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    remove(arr,n,ans,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}