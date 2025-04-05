#include<iostream>
using namespace std;

int main(){
    int arr[]={2,1,4,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n-1;i++){
     if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
        i++;
     }
    }
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }
    if(flag==false)cout<<"NOT ALOMOST SORTED";
    else cout<<"ALMOST SORTED";
}