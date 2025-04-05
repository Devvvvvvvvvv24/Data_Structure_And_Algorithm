#include<iostream>
using namespace std;


int main(){
    int arr[]={4,1,2,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);

    int acsum=n*(n-1);
    acsum/=2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<sum-acsum;
}