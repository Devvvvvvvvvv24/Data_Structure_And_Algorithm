#include<iostream>
using namespace std;


int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
   /* while(i<=j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    */
    for(int i=0,j=n-1;i<=j;i++,j--){
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    }