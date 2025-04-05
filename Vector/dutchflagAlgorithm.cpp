#include<iostream>
using namespace std;

void Dutchflag(int *arr,int n){
    int low=0;
    int mid=0;
    int hi=n-1;
    while(mid<=hi){
        if(arr[mid]==2){
            swap(arr[mid],arr[hi]);
         hi--;
        }
        else if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else mid++;
    }
}
int main(){
    int arr[]={1,0,2,1,0,2,2,0,1,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Dutchflag(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}