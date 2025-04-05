#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4};
    int n=4;
    int prod=1;
    for(int i=0;i<n;i++){
      prod*=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=prod/arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}