#include<iostream>
using namespace std;

void sort0and1(int arr[],int n){
    int noo=0;
    int noz=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)noz++;
        else noo++;
    }
    for(int i=0;i<n;i++){
        if(i<noz)arr[i]=0;
        else arr[i]=1;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort0and1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}