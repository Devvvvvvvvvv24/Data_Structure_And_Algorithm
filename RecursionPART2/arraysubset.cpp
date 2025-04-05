#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n,vector<int>v,int idx){
    if(idx==n){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     return;
    }
    // int ele=arr[idx];
    print(arr,n,v,idx+1);
    v.push_back(arr[idx]);
    print(arr,n,v,idx+1);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    print(arr,n,ans,0);
}