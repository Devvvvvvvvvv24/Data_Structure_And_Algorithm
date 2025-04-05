#include<iostream>
using namespace std;

int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int i=1;
    int j=k;
    int maxSum=0;
    int maxidx=-1;
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(maxSum<sum){
            maxSum=sum;
            maxidx=i;
        }
        i++;
        j++;
    }
    cout<<maxSum<<" "<<maxidx<<endl;
}