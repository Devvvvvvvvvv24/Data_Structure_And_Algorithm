#include<iostream>
using namespace std;


int main(){
    int arr[]={1,7,3,6,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int suml=0;
        for(int j=0;j<i;j++){
            suml+=arr[j];
        }
        int sumr=0;
        for(int j=i+1;j<n;j++){
            sumr+=arr[j];
        }
        if(suml==sumr)cout<<i;
    }
}