#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={4,1,11,23,3,22,11};
    int size=sizeof(arr)/sizeof(arr[0]);
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(arr[i],mini);

    }
    cout<<mini;
}