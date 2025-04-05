#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&v1,vector<int>&v2,vector<int>&v3){
    int i=0;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            v3[k++]=v1[i++];
        }
        else{
            v3[k++]=v2[j++];
        }
    }
    if(i==v1.size()){
        while(j<v2.size()){
            v3[k++]=v2[j++];
        }
    }
    else if(j==v2.size()){
        while(i<v1.size()){
            v3[k++]=v1[i++];
        }
    }
}

void mergesort(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int>a(n1),b(n2);
    //now copy pasting element
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic recursion divide and conqueure
    mergesort(a);
    mergesort(b);
    //merge both the array
    merge(a,b,v);
        }
int main(){
    int arr[]={4,2,5,3,1,2,3,4,5,8,6,7,8,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}