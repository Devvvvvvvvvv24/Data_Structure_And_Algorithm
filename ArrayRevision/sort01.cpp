#include<iostream>
using namespace std;

int main(){
    int arr[]={1,1,1,0,0,0,0,1,1,0,0,0,0,0,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==0)i++;
        else j--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}