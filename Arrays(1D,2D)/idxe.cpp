#include<iostream>
using namespace std;

void change(int arr[],int n){
    for(int i=0;i<n;i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else {
            arr[i]*=2;
        }
    }
}
int main(){
    int arr[]={2,3,1,5,7,8,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    change(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}