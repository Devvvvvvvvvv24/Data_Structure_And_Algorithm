#include<vector>
#include<iostream>
using namespace std;

int main(){
    int arr[]={66,55,33,111,-1};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>v(5,0);
    int x=0;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
     int minele=INT_MAX;
     int minidx=-1;
     for(int j=0;j<n;j++){
        if(v[j]==1)continue;
        else {
            if(minele>arr[j]){
                minele=arr[j];
                minidx=j;
            }
        }
     }
     arr[minidx]=x;
     v[minidx]=1;
     x++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}