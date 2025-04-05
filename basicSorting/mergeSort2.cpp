#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>v1,vector<int>v2,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j])v[k++]=v1[i++];
        else v[k++]=v2[j++];
    }
    if(i==v1.size()){
        while(j<v2.size()){
            v[k++]=v2[j++];
        }
    }
    if(j==v2.size()){
        while(i<v1.size()){
            v[k++]=v1[i++];
        }
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2,n2=n-n/2;
    vector<int>v1(n1),v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[i+n1];
    }

    mergesort(v1);
    mergesort(v2);

    merge(v1,v2,v);
}
int main(){
    vector<int>v={3,8,5,1,2,7,5,4,3,7,9,6,5,4};
    mergesort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}