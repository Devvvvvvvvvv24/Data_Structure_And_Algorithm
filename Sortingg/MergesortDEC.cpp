#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&v1,vector<int>&v2,vector<int>&v3){
    int i=0;;
    int j=0;
    int k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>=v2[j]){
            v3[k++]=v1[i++];
        }
        else {
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
void mergeSORT(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[i+n1];
    }
    //magic
    mergeSORT(a);
    mergeSORT(b);
    //merge both the arrays
    merge(a,b,v);
}
int main(){
    int arr1[]={5,1,3,2,8,6,9,7};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    vector<int>v(arr1,arr1+n1);
    for(int i=0;i<n1;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSORT(v);
     for(int i=0;i<n1;i++){
        cout<<v[i]<<" ";
    }
}