#include<iostream>
using namespace std;
int main(){
    int arr[]={40,32,75,65,29,12,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]<35)cout<<i<<" ";
    }
}