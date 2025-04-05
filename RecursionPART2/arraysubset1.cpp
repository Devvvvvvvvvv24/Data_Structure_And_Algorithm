#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n,vector<int>ans,int idx, vector< vector < int> >&v){
    if(idx==n){
       v.push_back(ans);
       return;
    }
    print(arr,n,ans,idx+1,v);
    ans.push_back(arr[idx]);
    print(arr,n,ans,idx+1,v);
    }
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    vector<vector<int>>v;
    print(arr,n,ans,0,v);
}