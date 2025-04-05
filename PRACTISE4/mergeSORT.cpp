#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[]={5,4,7,2,9,7,3,2,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}