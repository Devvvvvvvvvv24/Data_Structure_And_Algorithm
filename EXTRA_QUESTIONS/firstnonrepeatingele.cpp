#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,2,3,3,2,4,5,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j &&arr[i]==arr[j]){
               break ;
            }
        }
        if(j==n){
            cout<<arr[i]<<" ";
            break;
                    }
    }
}