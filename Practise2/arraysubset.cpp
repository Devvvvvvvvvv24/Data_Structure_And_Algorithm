#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[],int n,vector<int>v,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    int ele=arr[idx];
    subset(arr,n,v,idx+1);
    v.push_back(ele);
    subset(arr,n,v,idx+1);
}
int main(){
    int arr[]={1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    vector<int>v;
    subset(arr,n,v,0);
}