#include<iostream>
#include<vector>
using namespace std;


// void merge(vector<int>&a,vector<int>&b,vector<int>&c){
//     int i=0;
//     int j=0;
//     int k=0;
//     while(i<a.size()  &&j<b.size()){
//         if(a[i]<=b[j])c[k++]=a[i++];
//         else c[k++]=b[j++];
//     }
//     if(i==a.size()){
//         while(j<b.size())c[k++]=b[j++];
//     }
//     if(j==b.size()){
//         while(i<a.size())c[k++]=a[i++];
//     }
// }
void merge(vector<int>v1,vector<int>v2,vector<int>&v){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j])v[k++]=v1[i++];
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
void mergeSort(vector<int>&arr){
    int n=arr.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[i+n1];
    }
    //magic  recusrion
    mergeSort(a);
    mergeSort(b);

    //merging
    merge(a,b,arr);
}
int main(){
    vector<int>arr={2,1,3,5,3,2,12,3,4,5,9};
    mergeSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}