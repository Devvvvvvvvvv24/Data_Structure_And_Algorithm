#include<iostream>
using namespace std;

void merge(int *arr1,int m,int*arr2,int n){
  int i=m-1;
     int j=n-1;
     int k=m+n-1;
        while(j>=0){
            if(i>=0&& arr1[i]>arr2[j]){
                arr1[k]=arr1[i];
                i--;
                k--;
            }
                else{
                    arr1[k]=arr2[j];
                    j--;
                    k--;
                }
            
        }
}
int main(){
     int arr[]={1,4,7,9,13,16};
    int n1=sizeof(arr)/sizeof(arr[0]);
    int arr2[]={2,3,5,6,8,10,20};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    merge(arr,n1,arr2,n2);
    for(int i=0;i<n1;i++){
        cout<<arr[i]<<" ";
    }
}