#include<iostream>
#include<vector>
using namespace std;

void combi(int arr[],int n,vector<int>v,int tar,int idx){
    if(tar==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(tar<0)return;
    for(int i=idx;i<n;i++){
        v.push_back(arr[i]);
        combi(arr,n,v,tar-arr[i],i);
        v.pop_back();
    }
}
int main(){
    int arr[]={2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    combi(arr,n,v,8,0);
}