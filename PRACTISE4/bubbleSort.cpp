#include<iostream>
using namespace std;

int main(){
    int arr[]={4,3,1,5,6,3,7,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //BUBBLE SORT 
    //TC =O(n^2);
    //SC=O(1);
    cout<<endl;
    bool flag=true;
    for(int i=0;i<n-1;i++){
        flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag==true)break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}