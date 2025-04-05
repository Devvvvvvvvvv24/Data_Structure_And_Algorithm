#include<iostream>
using namespace std;


int main(){
    int arr[]={1,1,2,3,3,4,5,5,5,6,6,9,9,9,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    bool flag=false;
    int x=5;
    int idxx=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
            idxx=mid;
            flag=true;
            break;
        }
        else{
            lo=mid+1;
        }
        }
        else if(arr[mid]>x)hi=mid-1;
        else lo=mid+1;
    }
    if(flag==true)cout<<idxx;
    else cout<<-1;
}