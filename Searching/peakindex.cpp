#include<iostream>
using namespace std;


int main(){
    int arr[]={3,4,5,4,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n-2;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            cout<<i<<endl;
            break;
        }
    }
}