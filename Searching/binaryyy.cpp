#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    int tar=8;
    bool flag=false;
    while(lo<=hi){
         int mid=lo+(hi-lo)/2;
         if(tar==arr[mid]){
            cout<<"present"<<endl;
            flag =true;
            break;
         }
         else if(tar<arr[mid])hi=mid-1;
         else lo=mid+1;

    }
    if(flag==false)cout<<"not present"<<endl;
}