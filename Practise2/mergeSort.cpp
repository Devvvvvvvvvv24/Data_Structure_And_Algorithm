#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>v1,vector<int>v2,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j])v[k++]=v1[i++];
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
void merge(vector<int>v1,vector<int>v2,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j])v[k++]=v1[i++];
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
void mergeSort(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a1(n1),a2(n2);
    for(int i=0;i<n1;i++){
        a1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=v[i+n1];
    }
    //magic recursion
    mergeSort(a1);
    mergeSort(a2);
    // merging 2 sorted array
    merge(a1,a2,v);
}

int main(){
    vector<int>v ={4,3,5,2,1,3,4,7,6,4,2};
    mergeSort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}