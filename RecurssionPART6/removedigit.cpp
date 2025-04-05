#include<iostream>
#include<vector>
using namespace std;

void remove(vector<int>&arr,vector<int>&v,int idx){
    if(idx==arr.size()){
     for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
     }
     return;
    }
    int di=arr[idx];
    if(di==1)remove(arr,v,idx+1);
    else {v.push_back(arr[idx]);
    remove(arr,v,idx+1);
    }
}
int main(){
    vector<int>arr={1,2,1,1,3,1,4,1,1,2,3,3,1};
    // int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    remove(arr,v,0);
}