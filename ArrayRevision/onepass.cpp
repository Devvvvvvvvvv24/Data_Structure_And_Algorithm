#include<iostream>
using namespace std;

int largest(int arr[],int n){
    int lar1=INT_MIN;
    int lar2=INT_MIN;
    int lar3=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>lar1){
            lar3=lar2;
            lar2=lar1;
            lar1=arr[i];
        }
        else if(arr[i]>lar2 && lar1!=lar2){
            lar3=lar2;
            lar2=arr[i];
        }
        else if(arr[i]>lar3 && lar3!=lar2)
        lar3=arr[i];

    }
    return lar3;
}
int main(){
    int arr[]={4,2,3,1,9,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<largest(arr,n);
}