#include<iostream>
using namespace std;


int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxsum=0;
    int maxidx=0;
    int k=3;
    int sum=0;
    for(int i=0;i<k;i++){//k times
        sum+=arr[i];
    }
    int i=1;
    int j=k;
    maxsum=sum;
    while(j<n){ // n-k times
        sum=sum+arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    // tc= O(n)
    cout<<maxidx<<" "<<maxsum;
}