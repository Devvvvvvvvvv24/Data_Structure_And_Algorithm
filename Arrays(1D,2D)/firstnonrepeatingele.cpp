#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,1,3,4,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j])break;
        }
        if(j==n){
            cout<<arr[i]<<" first non repeating ele"<<endl;
            break;
        }
    }
}