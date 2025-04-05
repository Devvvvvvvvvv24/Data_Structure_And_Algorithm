#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,1,2,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int tar=7;
    int minLen=INT_MAX;
     int len;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
             if(arr[i]+arr[j]>=tar){
                len=j-i+1;
                break;
             }
        }   
    }
    minLen=min(minLen,len);
    cout<<minLen;
        }
    
