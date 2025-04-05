#include<iostream>
using namespace std;

int main(){
    int arr[]={33,5,56,71,12,88,32,21,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<size;i++){
       if(arr[i]>x)count++;
    }
    cout<<count;
}