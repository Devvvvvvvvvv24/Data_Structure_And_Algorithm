#include<iostream>
using namespace std;

void insertelement(int *arr,int n,int pos,int ele){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    n++;
}

void delelement(int *arr,int n,int pos){
    int temp=arr[pos];
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
   

}
int main(){
    int arr[]={1,2,3,5,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
   // insertelement(arr,size,3,4);
    //for(int i=0;i<size;i++){
      //  cout<<arr[i]<<" ";
   // }
   //cout<<endl;
   delelement(arr,size,0);
   size-=1;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}