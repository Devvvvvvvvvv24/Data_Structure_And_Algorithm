#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>arr,vector<int>arr2,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<arr.size() && j<arr2.size()){
        if(arr[i]<=arr2[j])v[k++]=arr[i++];
        else v[k++]=arr2[j++];
    }
    if(i==arr.size()){
        while(j<arr2.size()){
            v[k++]=arr2[j++];
        }
    }
    if(j==arr2.size()){
        while(i<arr.size()){
            v[k++]=arr[i++];
        }
    }
}
void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2,n2=n-n/2;
   vector<int> arr(n1),arr2(n2);
    for(int i=0;i<n1;i++){
        arr[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=v[i+n1];
    }

    mergesort(arr);
    mergesort(arr2);

    merge(arr,arr2,v);
}
int main(){
vector<int>v={2,1,7,4,3,2,5,6,7,8,9,5,6,7,8};
mergesort(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
}