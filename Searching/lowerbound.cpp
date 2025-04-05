#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,4,5,8,9,12,15,18,21};
    int n=10;
    int x=20;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            cout<<arr[i-1]<<" ";
            break;
        }
    }
}