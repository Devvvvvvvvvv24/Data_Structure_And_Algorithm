#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,5,6,7,8,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int tar=81; //time complexicity O(logn)//
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==tar){
            flag=true;
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<tar)lo=mid+1;
        else hi=mid-1;
    }
    if(flag==false)cout<<"not present";
        }