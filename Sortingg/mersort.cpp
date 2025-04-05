#include<iostream>
#include<vector>
using namespace std;

void mergge(vector<int>&v1,vector<int>&v2,vector<int>&v3){
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
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    //copying the values
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic
    mergesort(a);
    mergesort(b);
    //merge both the arrays
    mergge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
   /*int arr[]={2,5,8,12,15};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v1(arr,arr+n1);
    for(int i=0;i<n1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    int arr2[]={1,3,7,10,11,14};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int>v2(arr2,arr2+n2);
    for(int i=0;i<n2;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    vector<int>v3(n1+n2);
    mergge(v1,v2,v3);

    for(int i=0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
    */ 
int arr[]={12,5,81,2,75,56,19};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v1(arr,arr+n1);
    for(int i=0;i<n1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;
mergesort(v1);
for(int i=0;i<n1;i++){
    cout<<v1[i]<<" ";
}
}