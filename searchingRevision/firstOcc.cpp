#include<iostream>
using namespace std;


int main(){
    int arr[]={1,1,2,2,3,3,3,4,4,4,4,5,5,6,7,8,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    int lo=0;
    int hi=n-1;
    int idxx=-1;
    int x=4;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid-1]==x){
                hi=mid-1;
            }
            else{
           idxx=mid;
           flag=true;
           break;
            }
        }
        else if(arr[mid]>x)hi=mid-1;
        else lo=mid+1;
    }
 if(flag==true)cout<<idxx;
 else cout<<-1;   
}