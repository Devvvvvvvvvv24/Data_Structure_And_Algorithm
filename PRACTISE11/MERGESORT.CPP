#include<vector>
#include<iostream>
using namespace std;


void merge(vector<int>&v1,vector<int>&v2,vector<int>&arr){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j])arr[k++]=v1[i++];
        else arr[k++]=v2[j++];
    }
    if(i==v1.size()){
        while(j<v2.size())arr[k++]=v2[j++];
    }
    if(j==v2.size()){
        while(i<v1.size())arr[k++]=v1[i++];
    }
}
void mergeSort(vector<int>&arr){
    int n=arr.size();
    if(n==1)return;
    int n1=n/2,n2=n-n/2;
    vector<int>v1(n1),v2(n2);
    for(int i=0;i<n1;i++){
    v1[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=arr[n1+i];
    }
    mergeSort(v1);
    mergeSort(v2);

    merge(v1,v2,arr);
}
int main(){
    vector<int>arr={5,4,6,7,8,3,1,9};

    mergeSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}