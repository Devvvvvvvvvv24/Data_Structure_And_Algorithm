#include<iostream>
#include<vector>
using namespace std;

void subsequence(int arr[],int n,vector<int>v,int idx,int k){
    if(idx==n){
        if(k==v.size()){
            for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    subsequence(arr,n,v,idx+1,k);
    v.push_back(arr[idx]);
    subsequence(arr,n,v,idx+1,k);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    int k=3;
    subsequence(arr,n,v,0,k);
}