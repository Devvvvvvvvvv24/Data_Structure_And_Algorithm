#include<iostream>
#include<vector>
using namespace std;

void print(int arr[],int n,vector<int>v,int idx){
    if(idx==n){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    print(arr,n,v,idx+1);
    if(v.size()==0|| arr[idx-1]==v[v.size()-1]){
        v.push_back(arr[idx]);
         print(arr,n,v,idx+1);
    }
}
int main(){
        int arr[]={1,2,3,4};
        int n=sizeof(arr)/sizeof(arr[0]);
        vector<int>v;
        print(arr,n,v,0);
}