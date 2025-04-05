#include<iostream>
using namespace std;

void permutation(vector<int>&v){
    int n=v.size();
    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        reverse(v.begin(),v.end());
    }
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[i+1]){
            int temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }

    }
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx])j=i;
    }
   int temp=v[idx];
   v[idx]=v[j];
   v[j]=temp;
}