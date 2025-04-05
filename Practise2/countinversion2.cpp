#include<iostream>
#include<vector>
using namespace std;


void merge(vector<int>&a,vector<int>&b,vector<int>&c){
    int i=0;
    int j=0;
    int k=0;
    while(i<a.size()  &&j<b.size()){
        if(a[i]<=b[j])c[k++]=a[i++];
        else c[k++]=b[j++];
    }
    if(i==a.size()){
        while(j<b.size())c[k++]=b[j++];
    }
    if(j==b.size()){
        while(i<a.size())c[k++]=a[i++];
    }
}
int inversion(vector<int>&a,vector<int>&b){
    int ct=0;
    int i=0;
    int j=0;
    while(i<a.size() &&j<b.size()){
        if(a[i]>b[j]){
            ct+=(a.size()-i);
            j++;
        }
        else i++;
    }
    return ct;
}
void mergeSort(vector<int>&arr,int &count){
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
    mergeSort(a,count);
    mergeSort(b,count);
    count+=inversion(a,b);
    //merging
    merge(a,b,arr);
}

int main(){
    vector<int>v{5,1,3,0,4,2,6};

    int count=0;
    mergeSort(v,count);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<count;
}