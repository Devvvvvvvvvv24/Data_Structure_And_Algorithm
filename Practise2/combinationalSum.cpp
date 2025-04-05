#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void summ(vector<int>&arr,int n,int key,vector<int>v,int idx){
    if(key==0){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(key<0)return;
    for(int i=idx;i<n;i++){
        if(i!=idx &&arr[i]==arr[i-1])continue;
        v.push_back(arr[i]);
        summ(arr,n,key-arr[i],v,i+1);
        v.pop_back();//backtracking
    }
}
int main(){
    vector<int>arr={10,1,2,7,6,1,5};
    sort(arr.begin(),arr.end());
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=8;
    vector<int>v;
    summ(arr,n,key,v,0);
}