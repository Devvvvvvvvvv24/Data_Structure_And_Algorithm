#include<iostream>
using namespace std;

void triangle(int arr[],int n){
    if(n<1)return;
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        temp[i]=arr[i]+arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    triangle(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    triangle(arr,n);
}