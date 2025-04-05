#include<iostream>
using namespace std;

int unique(int *arr,int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                count++;
            }
        }
        if(!count)cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={2,1,3,2,4,1,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    unique(arr,n);
}