#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v,int arr[],int n,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    print(v,arr,n,idx+1);
    v.push_back(arr[idx]);
    print(v,arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    print(v,arr,n,0);
}