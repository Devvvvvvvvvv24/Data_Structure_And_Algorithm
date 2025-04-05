#include<iostream>
using namespace std;

int main(){
    int arr[]={11,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1])continue;
        else{
            cout<<"array not sorted"<<endl;
            flag=false;
            break;
        }
    }
    if(flag==true)cout<<"array is sorted"<<endl;
}